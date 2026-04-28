#include <iostream>
using namespace std;

#include "area.h"
using namespace shapes;



int main(){
    bool value = true;

    while(value){
        cout<<"1.calculate aquare"<<endl;
        cout<<"2.calculate triangle"<<endl;
        cout<<"3.calculate circle"<<endl;
        cout<<"4.quite"<<endl;
        cout<<"------------what option will choose?:" ;

        int choice;
        cin>>choice;
        cin.clear();
        cin.ignore(1000,'\n');
        

        switch (choice){
            case 1:{
                cout<<"you have chosen the square"<<endl;
                cout<<"definfe length: "<<endl;
                int length;
                cin>>length;
                cin.clear();
                cin.ignore(1000,'\n');
                square s;
                s.setLength(length);
                cout<<"the area of the square is: "<<area::calculateSquare(s)<<endl;
                value = false;
                break;
            }
            case 2:{
                cout<<"you have chosen the triangle"<<endl;
                cout<<"definfe base: "<<endl;
                int base;
                cin>>base;
                cin.clear();
                cin.ignore(1000,'\n');
                cout<<"definfe height: "<<endl;
                int height;
                cin>>height;
                cin.clear();
                cin.ignore(1000,'\n');
                triangle t;
                t.setBase(base);
                t.setHeight(height);
                cout<<"the area of the triangle is: "<<area::calculateTriangle(t)<<endl;
                value = false;
                break;
            }
            case 3:{
                cout<<"you have chossen the circle"<<endl;
                cout<<"definfe radius: "<<endl;
                int radius;
                cin>>radius;
                cin.clear();
                cin.ignore(1000,'\n');
                circle c;
                c.setRadius(radius);
                cout<<"the area of the circle is: "<<area::calculateCircle(c)<<endl;
                value = false;
                break;
            }
            case 4:{
                cout<<"you have chosen to quite the program"<<endl;
                value = false;
                break;
            }
        }
    }

    return 0;
}