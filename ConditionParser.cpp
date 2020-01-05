
#include "ConditionParser.h"

/**
 * checks if a condition is correct
 * @return if the condition is true or false
 */
bool ConditionParser::checkCondition() {
    Interpreter i;
    double left_val = i.interpret(this->condition[0])->calculate();
    // its boolean condition
    if (this->condition.size() == 1) {
        return (left_val > 0);
    }
    //get the sign and right argument
    string sign = this->condition[1];
    double right_val = i.interpret(this->condition[2])->calculate();
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
        return (left_val != right_val);
    }
    return false;
}

ConditionParser::ConditionParser(const vector<string> &conditions) : condition(conditions) {}