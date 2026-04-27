#include <iostream>


using namespace std;

//function to swap two numbers using pass by reference
int SwapNumbers(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;

    return 0;
}

int main() {
    int varA = 25;
    int varB = 100;

    cout<<"varA before swap: "<<varA<<endl;
    cout<<"varB before swap: "<<varB<<endl;

    SwapNumbers(varA, varB);

    cout<<"-----------------------------"<<endl;

    cout<<"varA after swap: "<<varA<<endl;
    cout<<"varB after swap: "<<varB<<endl;



    return 0;
}