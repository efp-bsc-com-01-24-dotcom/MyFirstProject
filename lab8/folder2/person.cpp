#include <iostream>
#include <string>
#include "person.h"
using namespace std;

Person::Person(){
    mHeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}
Person::Person(float newHeight){
    mHeight = newHeight;
    mFirstName = "";
    mAge = 0;
}
bool Person::operator==(const Person& other) const {
    return (mFirstName == other.mFirstName &&
            mHeight == other.mHeight &&
            mAge == other.mAge);
}
bool Person::operator!=(const Person& other) const {
    return !(*this == other);
}
bool Person::operator>(const Person& other) const {
    return mAge > other.mAge;
}
bool Person::operator<(const Person& other) const {
    return mAge < other.mAge;
}
Person::~Person(){
    // Destructor logic (if needed)
}
Person::Person(string newFirstName, float newHeight,int age){
    mHeight = newHeight;
    mFirstName = newFirstName;
    mAge = age;
}
Person Person::operator+(const Person& otherPerson){
    Person person;

    person.mHeight = this->mHeight + otherPerson.mHeight;
    person.mFirstName = this->mFirstName + " " + otherPerson.mFirstName;
    person.mAge = this->mAge + otherPerson.mAge;
    return person; // Return the combined person
}
void Person::print() const {
    cout << "Name: " << mFirstName
         << ", Height: " << mHeight
         << ", Age: " << mAge << endl;
}
Person::operator int(){
    return mAge;
}

int main(){
    Person john = Person("John", 60.0f,19);
    Person jane = Person("Jane", 75.0f,20);

    Person totalWeight = john + jane;
    totalWeight.print();

    if(jane == john){
        cout<<"John and Jane are the same person."<<endl;
    }if(jane != john){
        cout<<"John and Jane are different people."<<endl;
    }if(john>jane){
        cout<<"john is older than jane"<<endl;
    }if(john<jane){
        cout<<"john is not older than jane"<<endl;
    }


    return 0;
}