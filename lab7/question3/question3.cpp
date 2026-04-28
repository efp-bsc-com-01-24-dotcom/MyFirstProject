#include <iostream>
#include "header.h"
#include "aquare.h"
#include "circle.h"
#include "triangle.h"

using namespace std;
using namespace shapes;

namespace shapes{

    square::square(){
        length=0;
    }
    square::square(int &a){
        length=a;
    }
     float square::getlength(){
        return length;
    }
     float square::area(){
        return length*length;
    }
     square::~square(){
    }

    triangle::triangle(){
        base=0;
        height=0;
    }
    triangle::triangle(int &a,int &b){
        base=a;
        height=b;
    }
     float triangle::getBase(){
        return base;
    }
     float triangle::getHeight(){
        return height;
    }
     float triangle::area(){
        return 0.5*base*height;
    }
     triangle::~triangle(){
    }

    circle::circle(){
        radius=0;
    }
    circle::circle(int &a){
        radius=a;
    }
     float circle::getRadius(){
        return radius;
    }
     float circle::area(){
        return 3.14*radius*radius;
    }
     circle::~circle(){
    }

}

class area{
    public:
        area(){
        }
        void areaOfSquare(shapes::square &s){
            shapes::square sq;
            cout<<"The area of the square is: "<<sq.area()<<endl;
        }
        void areaOfTriangle(shapes::triangle &t){
            cout<<"The area of the triangle is: "<<t.area()<<endl;
        }
        void areaOfCircle(shapes::circle &c){
            shapes::circle ci;
            cout<<"The area of the circle is: "<<ci.area()<<endl;
        }
};

int main(){
    bool value = true;

    while(value){
    cout<<"1.calculate the area of a square: "<<endl;
    cout<<"2.calculate the area of a square: "<<endl;
    cout<<"3.calculate the area of a square: "<<endl;
    cout<<"4.Quit"<<endl;

    int input;
    cin>>input;
    cin.clear();
    cin.ignore(1000,'\n');

    switch(input){
        // case 1:
        //     cout<<"Please enter the length of the side of the square: ";
        //     int side;
        //     cin>>side; // get the length of the side of the square from the user
        //     cin.clear();
        //     cin.ignore(1000,'\n');
        //     shapes::square sq(side);
        //     area a;
        //     a.areaOfSquare(sq);
        //     break;
        case 2:
            cout<<"Please enter the base of the triangle: ";
            int base;
            cin>>base; // get the base of the triangle from the user
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"Please enter the height of the triangle: ";
            int height;
            cin>>height; // get the height of the triangle from the user
            cin.clear();
            cin.ignore(1000,'\n');
            shapes::triangle area(base, height);
            area a1;
            a1.areaOfTriangle(base, height);
            break;
        case 3:
            cout<<"Please enter the radius of the circle: ";
            int radius;
            cin>>radius; // get the radius of the circle from the user
            cin.clear();
            cin.ignore(1000,'\n');
            shapes::circle c(radius);
            area a2;
            a2.areaOfCircle(c);
            break;
        case 4:
            value=false;
            break;
    }

    }
    return 0;
}    