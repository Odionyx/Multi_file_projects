// parallelogram.h
#pragma once
#include "quadrilateral.h"

/* параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны);*/
class Parallelogram : public Quadrilateral
{
protected:
    Parallelogram(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D);
public:
    Parallelogram();
    void set_parallelogram(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D);
    void print_info() override;
};