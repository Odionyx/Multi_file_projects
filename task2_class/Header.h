// Header.h
#pragma once

class Counter
{
private:
    int num;
public:
    Counter(void);
    Counter(const int* const num2);
    //* ����� ++
    int inc(void);
    //* ����� --
    int dec(void);
    //* ����� = equal
    void get_count(void);
};