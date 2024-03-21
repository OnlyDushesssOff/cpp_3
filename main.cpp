#include "Apple.h"
#include "Eater.h"

int main(){
    Apple ap = Apple();
    ap.GetInfo();
    std::cout << std::endl;
    Eater person = Eater();
    person.Eat_an_apple(ap);
    ap.GetInfo();

}