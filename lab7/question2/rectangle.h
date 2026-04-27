#ifndef rectangle_h
#define rectangle_h

class Rectangle {
public:
    Rectangle();
    Rectangle(int a, int b);
    void setLength(float l);
    void setWidth(float w); 
    float getwidth();
    float getlength();
    float area();

private:
    float length, width;
};

#endif // rectangle_h