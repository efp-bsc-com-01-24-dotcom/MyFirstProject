#include <iostream>
#include "header.h"

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
        void areaOfSquare(square &s){
            shapes::square sq;
            cout<<"The area of the square is: "<<sq.area()<<endl;
        }
        void areaOfTriangle(triangle &t){
            cout<<"The area of the triangle is: "<<t.area()<<endl;
        }
        void areaOfCircle(circle &c){
            shapes::circle ci;
            cout<<"The area of the circle is: "<<ci.area()<<endl;
        }
};

int main(){



    return 0;
}    