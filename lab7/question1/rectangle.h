#ifndef rectangle_h
#define rectangle_h

class Rectangle {
public:
    Rectangle();
    int getwidth(int a);
    int getlength(int b);
    int area();
    friend int main();

private:
    float length, width;
};

#endif // rectangle_h