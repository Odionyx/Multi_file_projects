// rectangle.h
#pragma once
#include "parallelogram.h"

/* ������������� (������� a,c � b,d ������� �����, ��� ���� ����� 90);*/
class Rectangle : public Parallelogram
{
protected:
    Rectangle(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D);
public:
    Rectangle();
    void set_rectangle(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D);
    void print_info() override;
};