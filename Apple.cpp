#include "Apple.h"

Apple::Apple(){
    _height = 2 + rand() % 10;
    _wigth = 2 + rand() % 10;
    _weight = 30 + rand() % 170;
    _color = static_cast<Color>(rand() % 3);
    _status = true;
}

Apple::Apple(double height, double wigth, double weight, Color color){
    _height = height;
    _wigth = wigth;
    _weight = weight;
    _color = color;
    _status = true;
}

void Apple::GetInfo() const{
    if(!_status){
        std::cout << "Apple doesn't exist";
        return;
    }
    std::cout << "Height = " << _height << std::endl;
    std::cout << "Wigth= " << _height << std::endl;
    std::cout << "Weight = " << _height << std::endl;
    std::cout << "Color = ";
    switch(_color){
        case 0: std::cout << "yellow"  << std::endl;break;
        case 1: std::cout << "red"  << std::endl;break;
        case 2: std::cout << "green"  << std::endl;break;
    }
}

double Apple::GetWeight()const{
    return _weight;
}

bool Apple::GetStatus()const{
    return _status;
}

void Apple::Take_a_bite(){
    if(!_status){
        return;
    }
    _height -=2;
    _wigth -= 2;
    _weight -= 20;
    if(_height <= 0 || _weight <= 20 || _wigth <= 0){
        _status = false;
    }
}

void Apple::Throw_away(){
    _status = false;
}
