
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