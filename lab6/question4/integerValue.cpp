#include <iostream>

using namespace std;

int main(){

    int value;

    while(true){
        
    cout<<"Enter an integer value between 5 & 10 : ";
    cin>>value;

    
    if((cin.fail())){
        cout<<"Sorry, you enterd an invalid number, please try again."<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        continue;
    }

    if(value>=5&&value<=10){
        cout<<"You input value("<<value<<") has been accepted."<<endl;
        break;
    }else{
        cout<<"You have enterd "<<value<<". Please enter a number between 5 & 10."<<endl;
    }
}


    return 0;
}