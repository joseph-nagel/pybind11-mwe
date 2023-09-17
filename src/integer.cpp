#include "integer.h"
#include <iostream>

Integer::Integer(int i) {
    setNum(i);
}

void Integer::setNum(int i) {
    this->i = i;
}

int Integer::getNum() {
    return i;
}

void Integer::printNum() {
    std::cout << i << std::endl;
}

