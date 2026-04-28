#pragma once
namespace shapes{

    class square{
        private:
            int length;
        public:
            square();
            square(int &a);
             float getlength();
             float area();
             ~square();
    };

    class triangle{
        private:
            int base;
            int height;
        public:
            triangle();
            triangle(int &a,int &b);
            float getBase();
            float getHeight();
            float area();
            ~triangle();
    };

    class circle{
        private:
            int radius;
        public:
            circle();
            circle(int &a);
             float getRadius();
             float area();
             ~circle();
    };
}
 