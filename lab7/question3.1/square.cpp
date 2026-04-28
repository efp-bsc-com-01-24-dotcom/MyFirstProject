#include <iostream>
#include "square.h"
using namespace std;
using namespace shapes;

square::square(){
    length = 0;
}
square::square(double s){
    length = s;
}
square::~square(){}
double square::getLength()const{
    return length;
}
void square::setLength(double s){
    length = s;
}