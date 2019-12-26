#ifndef EX1_EX1_H
#define EX1_EX1_H

#include "Expression.h"
#include "Singleton.h"
#include <string>
#include <stack>
#include <map>
#include "Variable.h"

using namespace std;

class Value : public Expression{
    double value;
public:
    Value(double val){
        value = val;
    }
    double calculate() override{
        return value;
    }
    ~Value() override{}
};

class BinaryOperator: public Expression{
protected:
    Expression* left;
    Expression* right;
public:
    BinaryOperator(Expression* first, Expression* second){
        left = first;
        right = second;
    }
    ~BinaryOperator() override{
        delete left;
        delete right;
    }
};

class UnaryOperator : public Expression{
protected:
    Expression* expression;
public:
    UnaryOperator(Expression* expr) {
        expression = expr;
    }
    ~UnaryOperator() override{
        delete expression;
    }
};

class Plus : public BinaryOperator{
public:
    Plus(Expression* first, Expression* second) : BinaryOperator(first, second){}
    double calculate() override;
    ~Plus() override {}
};

class Minus : public BinaryOperator{
public:
    Minus(Expression* first, Expression* second) : BinaryOperator(first, second){}
    double calculate() override;
    ~Minus() override {}
};

class Mul : public BinaryOperator{
public:
    Mul(Expression* first, Expression* second) : BinaryOperator(first, second){}
    double calculate() override;
    ~Mul() override {}
};

class Div : public BinaryOperator{
public:
    Div(Expression* first, Expression* second) : BinaryOperator(first, second){}
    double calculate() override;
    ~Div() override {}
};

class UPlus : public UnaryOperator{
public:
    UPlus(Expression* expr) : UnaryOperator(expr){}
    double calculate() override;
    ~UPlus() override {}
};

class UMinus : public UnaryOperator{
public:
    UMinus(Expression* expr) : UnaryOperator(expr){}
    double calculate() override;
    ~UMinus() override {}
};

class Interpreter{
    map<string, double> variables;
    int precedence(char c);
    Expression* createOperation(stack<char>& operators, stack<Expression*>& expressions);
public:
    Expression* interpret(string infix);
    void setVariables(string vars);
};

#endif //EX1_EX1_H