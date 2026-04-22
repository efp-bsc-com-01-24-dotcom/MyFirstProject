#include <iostream>
#include "triangle.h"
#include "rectangle.h"

using namespace std;

int main(){
    Rectangle rect;
    Triangle trigl;

    Polygon* pPoly1 = &rect;
    Polygon* pPoly2 = &trigl;

    pPoly1 -> Setvalue(4,5);
    pPoly2 -> Setvalue(4,5);

    pPoly1 -> PrintArea();
    pPoly2 -> PrintArea();
    
    
    
   

    return 0;
}