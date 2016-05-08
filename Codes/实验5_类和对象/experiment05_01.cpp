#include<iostream>
#include<cmath>
double const PI=3.1415926;
using namespace std;
class Circle
{
public:
    Circle(double x,double y,double radius);
    double GetArea();
    void Show();
    void Set(double x,double y,double radius);
private:
    double x,y,radius;
};
class Rectangle
{
public:
    Rectangle(double length,double width);
    double GetArea();
    void Show();
    void Set(double length,double width);
private:
    double length,width;
};
class Triangle
{
public:
    Triangle(double a_x,double a_y,double b_x,double b_y,double c_x,double c_y);
    double GetArea();
    void Show();
    void Set(double a_x,double a_y,double b_x,double b_y,double c_x,double c_y);
private:
    double a_x,a_y,b_x,b_y,c_x,c_y;
};
Circle::Circle(double x,double y,double radius)
{
    Set(x,y,radius);
}
void Circle::Set(double x,double y,double radius)
{
    Circle::x=x;
    Circle::y=y;
    Circle::radius=radius;
}
double Circle::GetArea()
{
    double area;
    area=PI*pow(radius,2);
    return area;
}
void Circle::Show()
{
    cout<<"\n\n========================"<<endl;
    cout<<"Circle:"<<endl;
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
    cout<<"radius:"<<radius<<endl;
    cout<<"area:"<<GetArea()<<endl<<endl;
}

Rectangle::Rectangle(double length,double width)
{
    Set(length,width);
}
void Rectangle::Set(double length,double width)
{
    Rectangle::length=length;
    Rectangle::width=width;
}
double Rectangle::GetArea()
{
    double area;
    area=width*length;
    return area;
}
void Rectangle::Show()
{
    cout<<"========================"<<endl;
    cout<<"Rectangle:"<<endl;
    cout<<"length:"<<length<<endl;
    cout<<"width:"<<width<<endl;
    cout<<"area:"<<GetArea()<<endl<<endl;
}

Triangle::Triangle(double a_x,double a_y,double b_x,double b_y,double c_x,double c_y)
{
    Set(a_x,a_y,b_x,b_y,c_x,c_y);
}
void Triangle::Set(double a_x,double a_y,double b_x,double b_y,double c_x,double c_y)
{
    Triangle::a_x=a_x;
    Triangle::a_y=a_y;
    Triangle::b_x=b_x;
    Triangle::b_y=b_y;
    Triangle::c_x=c_x;
    Triangle::c_y=c_y;
}
double Triangle::GetArea()
{
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
        cout<<"数据输入错误!!@@##"<<endl;
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
    cout<<"area:"<<GetArea()<<endl<<endl;
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
