#pragma once;
#include <iostream>
#include <random>

enum Color{yellow, red, green};

class Apple{
private:
    double _height;
    double _wigth;
    double _weight;
    bool _status;
    Color _color;

public:
    Apple();
    Apple(double height, double wigth, double weight, Color color);

    void GetInfo() const;
    double GetWeight()const;
    bool GetStatus()const;

    void Take_a_bite();
    void Throw_away();
};