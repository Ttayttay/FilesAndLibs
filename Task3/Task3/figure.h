#pragma once

#include <iostream>

class Figure
{
    public:
        Figure();
        int getSidesCount();
        std::string getName();
        virtual void printInfo();

    protected:
        int sides_count;
        std::string name;
        Figure(int _sides_count, std::string _name);

};