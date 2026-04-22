#include <iostream>
#include "polygon.h"

void Polygon::Setvalue(int width,int height){
    mWidth = width;
    mHeight = height;
}
void Polygon::PrintArea(){
    std::cout<<this->Area()<<'\n';
}
