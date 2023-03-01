#pragma once

#include "figure.h"

class Triangle : public Figure
{
    public:
        Triangle(int a, int b, int c, int A, int B, int C);
        void printInfo() override;
        void getSides();
        void getAngles();

    protected:
        int sides[3];
        int angles[3];
};