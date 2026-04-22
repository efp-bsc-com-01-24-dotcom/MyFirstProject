#include <iostream>
#include "triangle.h"
#include "rectangle.h"

using namespace std;

int main(){

    Polygon* pPoly1 = new Rectangle();
    pPoly1->Setvalue(4, 5);

    Polygon* pPoly2 = new Triangle();
    pPoly2->Setvalue(4, 5);

    pPoly1->PrintArea();
    pPoly2->PrintArea();

    delete pPoly1;
    delete pPoly2;

    return 0;
}