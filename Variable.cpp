//
// Created by adi on 12/26/19.
//

#include "Variable.h"

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