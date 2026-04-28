#pragma once
#include "triangle.h"
#include "square.h"
#include "circle.h"

namespace shapes{
    class area{
        public:
            area();
            ~area();
            double static calculateTriangle(const triangle& t);
            double static calculateSquare(const square& s);
            double static calculateCircle(const circle& c);
    };  
}