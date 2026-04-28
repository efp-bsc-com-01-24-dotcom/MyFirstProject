#pragma once

namespace shapes{
    class square{
        public:
            square();
            square(double lenght);
            ~square();

            double getLength()const;
            void setLength(double s); 
        private:
            double length;

            
    };  
}