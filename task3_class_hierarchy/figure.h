// figure.h
#pragma once
#include <iostream>

class Figure
{
private:
    int num_sides = 0;
protected:
    Figure(int num_sides);
public:
    Figure(void);
    virtual void print_info();
};