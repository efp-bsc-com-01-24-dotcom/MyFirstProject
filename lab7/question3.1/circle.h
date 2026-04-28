#pragma once

namespace shapes{
    class circle{
        public:
        circle();
        circle(double radius);
        ~circle();
        double getRadius()const;
        void setRadius(double r);


        private:
            double radius;
    };  
}