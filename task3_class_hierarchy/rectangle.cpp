// rectangle.cpp
#include "rectangle.h"

/* прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90);*/
Rectangle::Rectangle(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D)
    : Parallelogram(a, b, c, d, A, B, C, D) {
    (*A) = (*B) = (*C) = (*D) = 90;
};

Rectangle::Rectangle() {
    this->a = 10; this->b = 20; this->c = 10; this->d = 20;
    this->A = 90; this->B = 90; this->C = 90; this->D = 90;
};

void Rectangle::set_rectangle(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D) {
    Rectangle(a, b, c, d, A, B, C, D);
};

void Rectangle::print_info() {
    std::cout << "Прямоугольник:" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы:  A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    std::cout << std::endl;
};