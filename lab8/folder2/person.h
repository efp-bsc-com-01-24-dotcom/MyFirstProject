#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person{
    public:
        Person();
        Person(float newHeight);
        Person(string newFirstName, float newHeight,int age);
        void print() const;
        ~Person();

        operator int();

        Person operator+(const Person& otherPerson);

        bool operator==(const Person& other) const;
        bool operator!=(const Person& other) const;
        bool operator>(const Person& other) const;
        bool operator<(const Person& other) const;
       // void operator + (const Person& otherPerson); // Overload + operator to add heights
        
    private:
        float mHeight;
        string mFirstName;
        int mAge;
};