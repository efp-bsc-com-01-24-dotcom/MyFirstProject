#include <iostream>
#include <random>

using namespace std;

int main(){
    int min = 0;
    int max = 11;
    
    /* to generate random numbers */
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);

    int daysUntillExpiration = dis(gen);
    cout<<daysUntillExpiration;
    
    //condition to check the number of days until expiration and print the appropriate message
    if(daysUntillExpiration==1){
        cout<<"Your subscription will expire in a day! Renew now and save 20%!"<<endl;
    }else if(daysUntillExpiration<=5){
        cout<<"Your subscription will expire in "<<daysUntillExpiration<<" days. Renew now and save 10%!"
        <<endl;
    }else if(daysUntillExpiration<=10){
        cout<<"Your subscription will expire in Renew now !"
        <<endl;
    }else{
        cout<<"You have an active subscription."<<endl;
    }


    return 0;
}