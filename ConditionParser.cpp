//
// Created by ortal on 20/12/2019.
//

#include "ConditionParser.h"
#include "ex1.h"

using namespace std;

ConditionParser::ConditionParser(const Data &data1, string *condition1) : data(data1), condition(condition1) {
    this->data=data1;
    this->condition=condition1;
}
int ConditionParser::execute() {

}

bool ConditionParser::checkCondition() {
//    Interpreter i = Interpreter();
//    Expression *e = nullptr;
//
//
//    double right_val,left_val;
//    string sign,right_arg,left_arg;
//
//
//    //get the sign and right argument
//    sign = this->condition[1];
//    right_arg = this->condition[2];
//    left_arg=this->condition[0];
//
//    //calculate the arguments
//    right_val = e->calculate();
//    left_val = e->calculate();
//
//    // if condition contains one argument and there is no comparing sign means
//    // its boolean condition
//    if (this->condition.size()==1) {
//        return (left_val > 0);
//    }//check condition for non boolean condition
//    else if (!this->condition.size()>1) {
//        //check if condition is satisfied
//        if (sign == "<") {
//            return (left_val< right_val);
//        } else if (sign == ">") {
//            return (right_val> left_val);
//        } else if (sign == "==") {
//            return (left_val == right_val);
//        } else if (sign == "<=") {
//            return (left_val<=right_val);
//        } else if (sign == ">=") {
//            return (right_val>= left_val);
//        } else if (sign == "!=") {
//            return (left_val!= right_val);
//        }
//    }
//
//    return false;
}

