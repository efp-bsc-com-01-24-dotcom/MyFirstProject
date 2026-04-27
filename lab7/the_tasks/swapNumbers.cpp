#include <iostream>

using namespace std;

int swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;

    return 0;
}

int main(){
    int vara = 10;
    int varb = 20;
    swap(vara,varb);

    cout<<"vara: "<<vara<<endl;
    cout<<"varb: "<<varb<<endl;

}