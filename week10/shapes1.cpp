#include <iostream>
using namespace std;

const int PI = 3; 
class shape{
    public:
    virtual int get_perimeter_length() {return -1; }
    virtual int get_area() {return -1; }
};

class circle : public shape{
    int radius1;
    public:
    circle(int radius){radius1 = radius; }
    int get_perimeter_length(){return 2* PI* radius1;}
    int get_area(){return PI* radius1* radius1;}
};

class rectangle : public shape{
    int height1;
    int width1;
    public:
    rectangle (int height, int width){
        height1 = height;
        width1 = width; 
        }
    int get_perimeter_length() {return 2 * (height1 + width1);}
    int get_area(){return width1 * height1;}
};

class square : public shape{
    int side1;
    public:
    square(int side){side1 = side; }
    int get_perimeter_length(){return 4* side1;}
    int get_area(){return side1*side1;}
};

int main(){
    shape *s1;
    circle c(3);
    s1 = &c;
    cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
    
    square s(3);
    s1 = &s;
    cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;

    rectangle r(4,5);
    s1 = &r;
    cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
    
    return 0;
};
