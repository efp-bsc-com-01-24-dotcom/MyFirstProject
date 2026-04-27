#include <iostream>
#include "box.h"

using namespace std;

Box::Box(){
    length = 0.0;
    breadth = 0.0;
    height = 0.0;

}
Box::Box(const double newLength, const double newBreadth, const double newheight){
    length = newLength;
    breadth = newBreadth;
    height = newheight;
    
}
Box::~Box(){}
double Box::GetVolume(){
    return length * breadth * height;
}
void Box::setLength(double len){
    length = len;
}
void Box::setBreadth(double bre){
    breadth = bre;
}
void Box::setHeight(double hei ){
    height = hei;
}
Box Box:: operator+(const Box& b){
    Box box;
    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;

    return box;
}

int main(){
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;

    //box1 specification
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    //box2 specification
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    //volume of Box1
    volume = Box1.GetVolume();
    cout << "Volume of Box1 : " << volume << endl;

    //volume of Box2
    volume = Box2.GetVolume();
    cout << "Volume of Box2 : " << volume << endl;

    //add two objects as follow:
    Box3 = Box1 + Box2;

    //volume of box3
    volume = Box3.GetVolume();
    cout << "Volume of Box3 : " << volume << endl;


    

}