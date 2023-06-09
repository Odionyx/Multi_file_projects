// quadrate.h
#pragma once
#include "rectangle.h"

class Quadrate : public Rectangle
{
protected:
    Quadrate(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D);
public:
    Quadrate();
    void set_quadrate(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D);
    void print_info() override;
};