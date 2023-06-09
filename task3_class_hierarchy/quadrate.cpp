// quadrate.cpp
#include "quadrate.h"

/* квадрат (все стороны равны, все углы равны 90);*/
Quadrate::Quadrate(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D)
    : Rectangle(a, b, c, d, A, B, C, D) {
    (*a) = (*b) = (*c) = (*d);
};

Quadrate::Quadrate() {
    this->a = 20; this->b = 20; this->c = 20; this->d = 20;
    this->A = 90; this->B = 90; this->C = 90; this->D = 90;
};

void Quadrate::set_quadrate(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D) {
    Quadrate(a, b, c, d, A, B, C, D);
};

void Quadrate::print_info() {
    std::cout << "Квадрат:" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы:  A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    std::cout << std::endl;
};