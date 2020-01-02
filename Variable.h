//
// Created by adi on 12/26/19.
//

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
    void setDirection(bool direction) {
        this->is_right = direction;
    }
    bool isRight() {
        return this->is_right;
    }
    string getSimPath() {
        return this->sim;
    }
    bool isRight() {
        return this->is_right;
    }
    virtual double calculate(){
        return value;
    }
    ~Variable() override{}
};

#endif //EX3_VARIABLE_H
