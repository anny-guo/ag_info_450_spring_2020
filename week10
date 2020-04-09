#include <iostream>
using namespace std;

const int PI = 3; 
class shape{
    int perimeter;
    int area;
    public:
    int get_perimeter_length() {return perimeter; }
    int get_area() {return area; }
    virtual void show();
};

class circle :: public shape{
    public:
    circle(int radius){ }
    int get_perimeter_length(){return 2 * PI * radius;}
    int get_area(){return PI * radius * radius;}
    void show();
};

class rectangle :: public shape{
    public:
    rectangle (int height, int width){ }
    int get_perimeter_lenth() {return 2 * (height + width);}
    int get_area(){return width * height;}
    void show();
};

class square :: public shape{
    public:
    square(int side){ }
    int get_perimeter_length(){return 4 * side;}
    int get_area(){return side * side;}
    void show();
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
}
