#pragma once

namespace shapes{
    class triangle{
        public:
            triangle();
            triangle(double base,double height);
            ~triangle();
            double getHeigth()const;
            double getBase()const;
            void setHeight(double b);
            void setBase(double h);
        private:
            double base;
            double height;
        
    };  
}