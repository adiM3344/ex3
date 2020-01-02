
#include "ConditionParser.h"

int ConditionParser::execute() {}

bool ConditionParser::checkCondition() {
    Interpreter i = Interpreter();
    double right_val,left_val;
    string sign,right_arg,left_arg;

    Expression* left_con = i.interpret(this->condition[0]);
    left_val = left_con->calculate();

    // its boolean condition
    if (this->condition.size()==1) {
        return (left_val > 0);
    }
    //get the sign and right argument
    sign = this->condition[1];
    Expression* right_con = i.interpret(this->condition[2]);

    //calculate the arguments
    right_val = right_con->calculate();

    // if condition contains one argument and there is no comparing sign means
    //check condition for non boolean condition
    if (this->condition.size()>1) {
        //check if condition is satisfied
        if (sign == "<") {
            return (left_val < right_val);
        } else if (sign == ">") {
            return (left_val > right_val);
        } else if (sign == "==") {
            return (left_val == right_val);
        } else if (sign == "<=") {
            return (left_val <= right_val);
        } else if (sign == ">=") {
            return (left_val >= right_val);
        } else if (sign == "!=") {
            return (left_val!= right_val);
        }
    }

    return false;
}

ConditionParser::ConditionParser(const vector<string> &condition) : condition(condition) {}