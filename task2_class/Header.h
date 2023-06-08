// Header.h
#pragma once

class Counter
{
private:
    int num;
public:
    Counter(void);
    Counter(const int* const num2);
    //* метод ++
    int inc(void);
    //* метод --
    int dec(void);
    //* метод = equal
    void get_count(void);
};