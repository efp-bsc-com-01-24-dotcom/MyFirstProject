#include <iostream>
#include "area.h"

using namespace std;
using namespace shapes;

area::area(){

}
area::~area(){}
double area::calculateTriangle(const triangle& t){
    return 0.5*t.getBase()*t.getHeigth();
}
double area::calculateSquare(const square& s){
    return s.getLength()*s.getLength();
}
double area::calculateCircle(const circle& c){
    return 3.14*c.getRadius()*c.getRadius();
}