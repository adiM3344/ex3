
#ifndef EX3_VARIABLE_H
#define EX3_VARIABLE_H

#include "Expression.h"
#include <string>

using namespace std;

class Variable : public Expression{
    string name;
    double value;
    string sim;
    bool is_right = false;
public:
    Variable(string varName, double varValue){
        this->name = varName;
        this->value = varValue;
    }
    Variable(string varName, string varSim, bool direction){
        this->name = varName;
        this->sim = varSim;
        this->is_right = direction;
    }
    Variable& operator++();
    Variable& operator--();
    Variable& operator++(int);
    Variable& operator--(int);
    Variable& operator+=(double);
    Variable& operator-=(double);
    void setValue(double v) {
        this->value = v;
    }
    /**
     * set the direction of the var to right or left
     * @param direction of the var
     */
    void setDirection(bool direction) {
        this->is_right = direction;
    }
    /**
     * returns if the arrow is right
     * @return if the arrow is right
     */
    bool isRight() {
        return this->is_right;
    }
    /**
     * returns the simulator path
     * @return the simulator path
     */
    string getSimPath() {
        return this->sim;
    }
    /**
     *
     * @return the value of the var
     */
    virtual double calculate(){
        return value;
    }
    ~Variable() override{}
};

#endif //EX3_VARIABLE_H
