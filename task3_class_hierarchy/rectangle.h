// rectangle.h
#pragma once
#include "parallelogram.h"

/* прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90);*/
class Rectangle : public Parallelogram
{
protected:
    Rectangle(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D);
public:
    Rectangle();
    void set_rectangle(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D);
    void print_info() override;
};