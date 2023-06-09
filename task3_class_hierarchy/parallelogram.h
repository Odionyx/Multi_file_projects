// parallelogram.h
#pragma once
#include "quadrilateral.h"

/* �������������� (������� a,c � b,d ������� �����, ���� A,C � B,D ������� �����);*/
class Parallelogram : public Quadrilateral
{
protected:
    Parallelogram(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D);
public:
    Parallelogram();
    void set_parallelogram(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D);
    void print_info() override;
};