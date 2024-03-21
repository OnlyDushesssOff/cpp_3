#pragma once;
#include "Apple.h"

class Eater{
private:
    int _age;
    double _height;
    double _weight;

public:
    Eater();
    Eater(int age, double height, double weight);

    void Eat_an_apple(Apple& ap);
};