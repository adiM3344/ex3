
#include "Variable.h"

/**
 * plus one the var
 * @return the new sum
 */
Variable& Variable::operator++() {
    return *new Variable(name, ++value);
}
/**
 * minus one the var
 * @return the new sum
 */
Variable& Variable::operator--() {
    return *new Variable(name, --value);
}
/**
 * plus one the var
 * @return the new sum
 */
Variable& Variable::operator++(int) {
    return *new Variable(name, ++value);
}
/**
 * minus one the var
 * @return the new sum
 */
Variable& Variable::operator--(int) {
    return *new Variable(name, --value);
}
/**
 * plus d to the var
 * @return the new sum
 */
Variable& Variable::operator+=(double d) {
    return *new Variable(name, value + d);
}
/**
 * minus d to the var
 * @return the new sum
 */
Variable& Variable::operator-=(double d) {
    return *new Variable(name, value - d);
}