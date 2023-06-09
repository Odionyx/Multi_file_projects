// isosceles_tri.cpp
#include "isosceles_tri.h"

/* �������������� ����������� (������� a � c �����, ���� A � C �����);*/
Isosceles_tri::Isosceles_tri(int* a, int* b, int* c, int* A, int* B, int* C)
    : Triangle(a, b, c, A, B, C) {
    (*c) = (*a);
    (*A) = (*C);
};

Isosceles_tri::Isosceles_tri() {
    this->c = a = c; this->a = c;
    this->A = C = A; this->C = A;
};

void Isosceles_tri::set_isosceles_tri(int* a, int* b, int* c, int* A, int* B, int* C) {
    Isosceles_tri(a, b, c, A, B, C);
};

void Isosceles_tri::print_info() {
    std::cout << "�������������� �����������:" << std::endl;
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "����:  A=" << A << " B=" << B << " C=" << C << std::endl;
    std::cout << std::endl;
};