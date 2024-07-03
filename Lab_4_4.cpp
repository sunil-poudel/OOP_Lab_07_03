#include <iostream>
using namespace std;
class shape{
private:
    float value;
public:
    shape(float value):value(value){}
    float getValue(){
        return value;
    }
};
class square:public shape{
public:
    square(float length): shape(length){}
    void findPerimeter(){
        float perimeter = shape::getValue()*4;
        cout<<"The perimeter of square with length "<<shape::getValue()<<" is "<<perimeter<<endl;
    }
};
class circle:public shape{
public:
    circle(float radius):shape(radius){}
    void findPerimeter(){
        float perimeter = shape::getValue()*2*3.14;
        cout<<"The perimeter of square with length "<<shape::getValue()<<" is "<<perimeter<<endl;
    }
};
int main(){
    circle c1(7);
    square s1(10);
    c1.findPerimeter();
    s1.findPerimeter();
}