#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(){
    length = 0;
    width = 0;
}
Rectangle::Rectangle(int a,int b ){
    length = a;
    width = b;
}
Rectangle::~Rectangle(){}
void Rectangle::setLength(float l){
    length = l;
}

void Rectangle::setWidth(float w){
    width = w;
}
float Rectangle::getwidth(){
    return width;
}
float Rectangle::getlength(){
    return length;
}
float Rectangle::area(){
    return length*width;
}



/*
class Rectangle{
     public:    
        Rectangle(){
            length = 0;
            width = 0;
        }   
        //assing the values
        int assing(int &a,int &b){
            a = length;
            b = width;
            return 0;
        }
        //to get the values of each of the variables 
        int getwidth(int a){
            return width;
        }
        int getlength(int b){
            return length;
        }
        //get teh area
        int area(){
            return length*width;
        }
        friend int main();//iend function to display the area of the rectangle
        //destructor
        ~Rectangle(){}
    private:
        float length, width; 
        int assingValues(int &a,int &b){
            a = length;
            b = width;
            return 0;
        }
};
*/

int main(){
    float a,b,l1,l2;
    Rectangle object; //this is to create an object for the class
    cout<<"enter the length and width of the rectangle (length width): ";
    cin>>a>>b;
    object.setLength(a);
    object.setWidth(b);
    cout<<"Area of the rectangle: "<<object.area()<<endl;

    Rectangle obj;
    cout<<"enter the length and width of the newly created rectangle (length width): ";
    cin>>l1>>l2;
    obj.setLength(l1);
    obj.setWidth(l2);
    cout<<"Area of the newly created rectangle: "<<obj.area()<<endl;

    return 0;
}