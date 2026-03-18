#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>

using namespace std;

/*functions for the scope of the user*/
    int square(int x){
        return x*x*x;
    }
    int rectangle(int l, int w){
        return l*w;   
    }
    int triangle(int b, int h){
        return 0.5*b*h; 
    }

int main(){

    bool value = true;
    while(value){
            // display the menu to the user and get their selection
            cout<<"Please enter the area of the shape to calculate"<<endl;  
            cout<<"1. Square"<<endl;
            cout<<"2. Rectangle"<<endl;
            cout<<"3. Triangle"<<endl;
            cout<<"4. Quit program"<<endl;  //quit option for the user to exit the program
            cout<<"Enter your selection: ";

            /* get user input */
            int selection;
            cin>>selection;
            cin.clear();
            cin.ignore(1000,'\n');

            /* switch statement to handle user selection */
            switch(selection){
                case 1:
                    cout<<"Please enter the length of the side of the square: ";

                    int side;
                    cin>>side; // get the length of the side of the square from the user
                    cin.clear();
                    cin.ignore(1000,'\n');

                    cout<<"The area of the square is: "<<square(side)<<endl;
                    value = false;
                    break;
                case 2:
                    cout<<"Please enter the length of the rectangle: ";

                    int length;
                    cin>>length; // get the length of the rectangle from the user
                    cin.clear();
                    cin.ignore(1000,'\n');
                    cout<<"Please enter the width of the rectangle: ";

                    int width;
                    cin>>width; // get the width of the rectangle from the user
                    cin.clear();
                    cin.ignore(1000,'\n');

                    cout<<"The area of the rectangle is: "<<rectangle(length, width)<<endl;
                    value = false;
                    break;
                case 3:
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

                    cout<<"The area of the triangle is: "<<triangle(base, height)<<endl;
                    value = false;
                    break;
                case 4:
                    cout<<"Quitting program...\n"<<endl;
                    this_thread::sleep_for(chrono::seconds(3)); // pause for 2 seconds before exiting the program
                    cout<<"program termination complete :( \a"
                    <<endl;
                    value = false;
                    break;
                default:
                    cout<<"Invalid selection. Please try again."<<endl;
            }       
    
        }
    



    return 0;
}