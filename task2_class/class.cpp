// class.cpp
#include "Header.h"
#include <iostream>

Counter::Counter(void) {
        this->num = 1;
}
Counter::Counter(const int* const num2) {
    this->num = *num2;
}
    //* метод ++
int Counter::inc(void) {
    return num++;
}
    //* метод --
int Counter::dec(void) {
    return num--;
}
    //* метод = equal
void Counter::get_count(void) {
    std::cout << num << std::endl;
    return;
}