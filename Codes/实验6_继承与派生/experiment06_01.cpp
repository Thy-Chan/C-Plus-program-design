#include<iostream>
#include<cmath>
double const PI=3.1415926;
using namespace std;

class Shape
{
public:
    virtual double area() const =0;
};
class Circle:public Shape
{
public:
    Circle(double x,double y,double radius):x(x),y(y),radius(radius){}
    virtual double area() const {return 3.14159*radius*radius;};
    void Show();
private:
    double x,y,radius;
};
class Rectangle:public Shape
{
public:
    Rectangle(double length,double width):length(length),width(width){}
    virtual double area() const {return width*length;}
    void Show();
private:
    double width,length;
};

class Triangle:public Shape
{
public:
    Triangle(double a_x,double a_y,double b_x,double b_y,double c_x,double c_y)
            :a_x(a_x),a_y(a_y),b_x(b_x),b_y(b_y),c_x(c_x),c_y(c_y){}
    virtual double area() const {
    double a,b,c,p,area;
    a=sqrt(pow(a_x-b_x,2)+pow(a_y-b_y,2));
    b=sqrt(pow(b_x-c_x,2)+pow(b_y-c_y,2));
    c=sqrt(pow(c_x-a_x,2)+pow(c_y-a_y,2));
    if(a+b>c&&abs(a-b<c))
    {
        p=(a+b+c)/2;
        area=sqrt( p*(p-a)*(p-b)*(p-c) );
        return area;
    }
    else
        cout<<"数据输入错误!!@@##"<<endl;}
    void Show();
private:
    double a_x,a_y,b_x,b_y,c_x,c_y;
};

void Circle::Show()
{
    cout<<"\n\n========================"<<endl;
    cout<<"Circle:"<<endl;
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
    cout<<"radius:"<<radius<<endl;
    cout<<"area:"<<area()<<endl<<endl;
}

void Rectangle::Show()
{
    cout<<"========================"<<endl;
    cout<<"Rectangle:"<<endl;
    cout<<"length:"<<length<<endl;
    cout<<"width:"<<width<<endl;
    cout<<"area:"<<area()<<endl<<endl;
}

void Triangle::Show()
{
    cout<<"========================"<<endl;
    cout<<"Triangle:"<<endl;
    cout<<"a_x:"<<a_x<<endl;
    cout<<"a_y:"<<a_y<<endl;
    cout<<"b_x:"<<b_x<<endl;
    cout<<"b_y:"<<b_y<<endl;
    cout<<"c_x:"<<c_x<<endl;
    cout<<"c_y:"<<c_y<<endl;
    cout<<"area:"<<area()<<endl<<endl;
}

int main()
{
    int cx,cy,cr;
    int rl,rw;
    int tx1,ty1,tx2,ty2,tx3,ty3;
    cout<<"请输入圆心的坐标x,y以及半径r:"<<endl;
    cin>>cx>>cy>>cr;
    cout<<"请输入矩形的长和宽:"<<endl;
    cin>>rl>>rw;
    cout<<"请输入三角形的顶点坐标(x1,y1),(x2,y2),(x3,y3):"<<endl;
    cin>>tx1>>ty1>>tx2>>ty2>>tx3>>ty3;
    Circle *c=new Circle(cx,cy,cr);
    Rectangle *r=new Rectangle(rl,rw);
    Triangle *t=new Triangle(tx1,ty1,tx2,ty2,tx3,ty3);
    c->Show();
    r->Show();
    t->Show();
    return 0;
}
