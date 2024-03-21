#include "Eater.h"

Eater::Eater(){
    _age = 10;
    _height = 10;
    _weight = 10;
}

Eater::Eater(int age, double height, double weight){
    _age = age;
    _height = height;
    _weight = weight;
}

void Eater::Eat_an_apple(Apple& ap){
    double weg = ap.GetWeight();
    _weight += weg;
    while(ap.GetStatus()){
        ap.Take_a_bite();
    }
}