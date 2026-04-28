#include <iostream>
#include "triangle.h"
using namespace std;
using namespace shapes;

triangle::triangle(){
    base = 0;
    height = 0;
}
triangle::triangle(double b,double h){
    base = b;
    height = h;

}
triangle::~triangle(){

}
double triangle::getHeigth()const{
    return height;
}
double triangle::getBase()const{
    return base;
}
void triangle::setHeight(double b){
    base = b;
}
void triangle::setBase(double h){
    height = h;
}