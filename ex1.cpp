#include "ex1.h"
#include "Expression.h"

using namespace std;

Variable& Variable::operator++() {
    return *new Variable(name, ++value);
}

Variable& Variable::operator--() {
    return *new Variable(name, --value);
}

Variable& Variable::operator++(int) {
    return *new Variable(name, ++value);
}

Variable& Variable::operator--(int) {
    return *new Variable(name, --value);
}

Variable& Variable::operator+=(double d) {
    return *new Variable(name, value + d);
}

Variable& Variable::operator-=(double d) {
    return *new Variable(name, value - d);
}

double Plus::calculate() {
    return left->calculate() + right->calculate();
}

double Minus::calculate() {
    return left->calculate() - right->calculate();
}

double Mul::calculate() {
    return left->calculate() * right->calculate();
}

double Div::calculate() {
    double rightResult = right->calculate();
    if (rightResult == 0) {
        throw "Error: invalid input";
    }
    return left->calculate() / right->calculate();
}

double UPlus::calculate() {
    return expression->calculate();
}

double UMinus::calculate() {
    return -expression->calculate();
}

Expression* Interpreter::interpret(string infix) {
    stack<char> opr;
    stack<Expression*> expr;
    string temp = "";
    for (int i =0; i<infix.size(); i++) {
        if (infix[i] != ' ') {
            temp += infix[i];
        }
    }
    infix = temp;
    int i = 0;
    int size = infix.size();
    while (i < size) {
        //if it's a number or a variable, add to expression stack
        if (infix[i] >= '0' && infix[i] <= '9') {
            string val;
            while ((i < size) && ((infix[i] >= '0' && infix[i] <= '9') || infix[i] == '.')) {
                val += infix[i];
                i++;
            }
            i--;
            double d = stod(val);
            expr.push(new Value(d));
        }
        // if it's a variable, add its value to expression stack
        else if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z') || infix[i] == '_') {
            string name;
            while ((i < size) && ((infix[i] >= '0' && infix[i] <= '9') || infix[i] == '_'
                    || (infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z'))) {
                name += infix[i];
                i++;
            }
            if (variables.count(name)) {
                double d = variables.find(name)->second;
                expr.push(new Variable(name, d));
            }
            else {
                Singleton* s = Singleton::getInstance();
                if (s->getSymbolTable()->count(name)) {
                    double d = s->getSymbolTable()->at(name).calculate();
                    expr.push(new Variable(name, d));
                } else {
                    throw "Error: invalid input";
                }
            }
            i--;
        }
        // if it's a '(', push to operators stack
        else if (infix[i] == '(') {
            opr.push(infix[i]);
        }
        // if it's a ')', pop the operators stack until ')'
        else if (infix[i] == ')') {
            while(!opr.empty() && opr.top() != '(') {
                Expression* expression = createOperation(opr, expr);
                expr.push(expression);
            }
            // remove parenthesis
            if(opr.top() == '(') {
                opr.pop();
            }
        }
        // if it's an operator, add to expression stack if precedence is higher
        else if ((infix[i] == '*' || infix[i] == '/' || infix[i] == '+' || infix[i] =='-')) {
            // if the next char is also an operator
            if ((infix[i+1] == '*' || infix[i+1] == '/' || infix[i+1] == '+' || infix[i+1] == '-')) {
                throw "Error: invalid input";
            }
            // check if it is an unary operator
            if ((infix[i] == '-' || infix[i] == '+') && (infix[i-1] == '(' || i == 0)) {
                if (infix[i] =='-') {
                    expr.push(new Value(-1));
                }
                if (infix[i] =='+') {
                    expr.push(new Value(1));
                }
                opr.push('*');
            }
            else if (!opr.empty() && precedence(opr.top()) >= precedence(infix[i])) {
                Expression* expression = createOperation(opr, expr);
                expr.push(expression);
                opr.push(infix[i]);
            }
            else {
                opr.push(infix[i]);
            }
        }
        else {
            throw "Error: invalid input";
        }
        i++;
    }
    // empty the operators stack to the expression stack
    while (!opr.empty()) {
        Expression* expression = createOperation(opr, expr);
        expr.push(expression);
    }
    if (expr.size() != 1) {
        throw "Error: invalid input";
    }
    return expr.top();
}

void Interpreter::setVariables(string vars) {
    int i = 0;
    int varsSize = vars.size();
    while (i < varsSize) {
        string s;
        // get the sub-string that represents the variable
        while (i < varsSize && vars[i] != ';') {
            s += vars[i];
            i++;
        }
        // get the variable's name
        string name;
        int j = 0;
        if ((s[j] < 'a' || s[j] > 'z') && (s[j] < 'A' || s[j] > 'Z') && s[j] != '_') {
            throw "Error: invalid input";
        }
        while (s[j] != '=') {
            name += s[j];
            j++;
        }
        // if the variable already exist, delete it to insert the new value
        if (variables.count(name)) {
            variables.erase(name);
        }
        // get the value of the variable
        string valueString;
        j++;
        int firstJ = j;
        int sSize = s.size();
        bool hasPoint = false;
        for (; j < sSize; j++) {
            // check if the value is valid
            if ((j == firstJ && s[j] != '-' && (s[j] < '0' || s[j] > '9'))
                || (j != firstJ && (s[j] < '0' || s[j] > '9') && s[j] != '.')
                || (j == firstJ && s[j] == '-' && j == sSize-1)
                || (s[j] == '.' && hasPoint)) {
                throw "Error: invalid input";
            }
            if (s[j] == '.') {
                hasPoint = true;
            }
            valueString += s[j];
        }
        double value = stod(valueString);
        variables.insert({name, value});
        i++;
    }
}

Expression *Interpreter::createOperation(stack<char>& opr, stack<Expression*>& expr) {
    if (expr.size() < 2 || opr.empty()) {
        throw "Error: invalid input";
    }
    char operation = opr.top();
    opr.pop();
    Expression *second = expr.top();
    expr.pop();
    Expression *first = expr.top();
    expr.pop();
    if (operation == '*') {
        return new Mul(first, second);
    }
    if (operation == '/') {
        return new Div(first, second);
    }
    if (operation == '+') {
        return new Plus(first, second);
    }
    if (operation == '-') {
        return new Minus(first, second);
    }
    // if it is not an operator
    throw "Error: invalid input";
}

int Interpreter::precedence(char c){
    if (c == '*' || c == '/') {
        return 2;
    }
    if (c == '+' || c == '-') {
        return 1;
    }
    return -1;
}