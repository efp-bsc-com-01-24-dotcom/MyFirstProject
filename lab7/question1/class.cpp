#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(){
    length = 0;
    width = 0;
}
int Rectangle::getwidth(int a){
    return width;
}
int Rectangle::getlength(int b){
    return length;
}
int Rectangle::area(){
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
    Rectangle object; //this is to create an object for the class
    cout<<"enter the length and width of the rectangle (length width): ";
    cin>>object.length>>object.width;
    cout<<"Area of the rectangle: "<<object.area()<<endl;


    return 0;
}