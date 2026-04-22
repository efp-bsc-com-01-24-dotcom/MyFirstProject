#include <iostream>
#include "triangle.h"
#include "rectangle.h"

using namespace std;

int main(){
    Rectangle rect;
    Triangle tringl;
    rect.Setvalue(4,5);
    tringl.Setvalue(4,5);
    cout<<"Area of rectangle is: "<<rect.Area()<<endl;
    cout<<"Area of triangle is: "<<tringl.Area()<<endl;


    return 0;
}