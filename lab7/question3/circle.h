#pragma once
#include <iostream>
using namespace std;

    class circle{
        private:
            float radius;
        public:
            circle();
            circle(int &a);
            float getRadius();
            float area();
            ~circle();
    };
