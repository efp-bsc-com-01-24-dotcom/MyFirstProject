#include <iostream>
#include "circle.h"
using namespace std;
using namespace shapes;


circle::circle(){
    radius = 0;
}
circle::circle(double r){
    radius = r;
}
circle::~circle(){}
double circle::getRadius()const{
    return radius;
}
void circle::setRadius(double r){
    radius = r;
}