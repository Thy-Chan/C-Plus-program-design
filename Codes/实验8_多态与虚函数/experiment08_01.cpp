#include<iostream>
#include<cstring>
#include<cmath>
double const PI=3.1415926;
using namespace std;

class Shape
{
public:
    virtual void Showarea() const =0;
};

class Circle:public Shape
{
private:
    double x,y,radius;
public:
    Circle(double x,double y,double radius):x(x),y(y),radius(radius){}
    void Showarea() const {cout<<"Circle area:"<<3.14159*radius*radius<<endl;};
};
class Rectangle:public Shape
{
private:
    double length,width;
public:
    Rectangle(double length,double width):length(length),width(width){}
    void Showarea() const {cout<<"Rectangle area:"<<width*length<<endl; }
};

class Triangle:public Shape
{
private:
    double a_x,a_y,b_x,b_y,c_x,c_y;
public:
    Triangle(double a_x,double a_y,double b_x,double b_y,double c_x,double c_y)
            :a_x(a_x),a_y(a_y),b_x(b_x),b_y(b_y),c_x(c_x),c_y(c_y){}
    void Showarea() const {
    double a,b,c,p,area;
    a=sqrt(pow(a_x-b_x,2)+pow(a_y-b_y,2));
    b=sqrt(pow(b_x-c_x,2)+pow(b_y-c_y,2));
    c=sqrt(pow(c_x-a_x,2)+pow(c_y-a_y,2));
    if(a+b>c&&abs(a-b<c))
    {
        p=(a+b+c)/2;
        area=sqrt( p*(p-a)*(p-b)*(p-c) );
    }
    else
        cout<<"Êý¾ÝÊäÈë´íÎó!!@@##"<<endl;
    cout<<"Triangle area:"<<area<<endl<<endl;}
};


int main()
{
    Shape* p1;
    Circle circle(30, 45, 35);
    p1 = &circle;
    Shape* p2;
    Rectangle rectangle(14, 45);
    p2 = &rectangle;
    Shape* p3;
    Triangle triangle(34, 45, 89, 45, 54, 67);
    p3 = &triangle;
    p1->Showarea();
    p2->Showarea();
    p3->Showarea();
    return 0;
}
