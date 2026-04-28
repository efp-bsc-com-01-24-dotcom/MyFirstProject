#pragma once
#include <iostream>
using namespace std;

 
 class triangle{
        private:
            float base;
            float height;
        public:
            triangle();
            triangle(int &a,int &b);
            float getBase();
            float getHeight();
            float area();
            ~triangle();
    };