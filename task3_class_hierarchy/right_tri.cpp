// right_tri.cpp
#include "right_tri.h"

/* ������������� ����������� (���� C ������ ����� 90);*/
Right_tri::Right_tri(int* a, int* b, int* c, int* A, int* B, int* C) {
    this->a = (*a); this->b = (*b); this->c = (*c);
    this->A = (*A); this->B = (*B); this->C = (*C);
};

Right_tri::Right_tri() {
    this-> C = 90;
};

void Right_tri::set_right_tri(int* a, int* b, int* c, int* A, int* B, int* C) {
    Right_tri(a, b, c, A, B, C);
};

void Right_tri::print_info() {
    std::cout << "������������� �����������:" << std::endl;
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "����:  A=" << A << " B=" << B << " C=" << C << std::endl;
    std::cout << std::endl;
};