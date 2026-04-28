#pragma once
#include <iostream>
using namespace std;

    class square{
        private:
            float length;
        public:
            square();
            square(int &a);
            float getlength();
            float area();
            ~square();
    };
