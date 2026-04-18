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

    //condition to check the number of days until expiration and print the appropriate message
    switch(daysUntillExpiration){
        case 1:
            cout<<"Your subscription will expire in a day! Renew now and save 20%!"<<endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout<<"Your subscription will expire in "<<daysUntillExpiration<<" days. Renew now and save 10%!"<<endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout<<"Your subscription will expire soon. Renew now!"<<endl;
            break;
        default:
            cout<<"You have an active subscription."<<endl;
    }

    return 0;

}