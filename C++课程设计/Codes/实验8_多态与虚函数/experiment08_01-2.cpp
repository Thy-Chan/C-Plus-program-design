#include<iostream>
#include<cmath>
double const PI=3.1415926;
using namespace std;

class Shape
{
public:#include<iostream>
#include<cmath>
double const PI=3.1415926;
using namespace std;

class Shape
{
public:
    virtual double GetArea() const =0;
    virtual void Show() =0;
    virtual void Set() =0;
};
class Circle:public Shape
{
public:
    Circle(double x,double y,double radius)
    {   X=x;Y=y;Radius=radius; }
    virtual double GetArea() const {return 3.14159*Radius*Radius;};
    void Show();
    void Set();
private:
    double X,Y,Radius;
};
class Rectangle:public Shape
{
public:
    Rectangle(double length,double width)
    {   Length=length;Width=width;  }
    virtual double GetArea() const {return Width*Length;}
    void Show();
    void Set();
private:
    double Width,Length;
};

class Triangle:public Shape
{
public:
    Triangle(double a_x,double a_y,double b_x,double b_y,double c_x,double c_y)
    {   A_x=a_x;A_y=a_y;B_x=b_x;B_y=b_y;C_x=c_x;C_y=c_y;  }
    virtual double GetArea() const
    {
    double a,b,c,p,area;
    a=sqrt(pow(A_x-B_x,2)+pow(A_y-B_y,2));
    b=sqrt(pow(B_x-C_x,2)+pow(B_y-C_y,2));
    c=sqrt(pow(C_x-A_x,2)+pow(C_y-A_y,2));
    if(a+b>c&&abs(a-b<c))
    {
        p=(a+b+c)/2;
        area=sqrt( p*(p-a)*(p-b)*(p-c) );
        return area;
    }
    else
        cout<<"数据输入有误."<<endl;
    }
    void Show();
    void Set();
private:
    double A_x,A_y,B_x,B_y,C_x,C_y;
};

void Circle::Show()
{
    cout<<endl<<endl;
    cout<<"Circle:"<<endl<<"x为:"<<X<<endl<<"y为:"<<Y<<endl<<"radius为:"<<Radius<<endl;
    cout<<"GetArea:"<<GetArea()<<endl<<endl<<endl<<endl;
}
void Circle::Set()
{
    int x1,y1,r1;
    cout<<"请输入圆心的坐标x,y以及半径r:"<<endl;
    cin>>x1>>y1>>r1;
    X=x1;Y=y1;Radius=r1;
}

void Rectangle::Show()
{
    cout<<"Rectangle:"<<endl<<"length为:"<<Length<<endl<<"width为:"<<Width<<endl;
    cout<<"GetArea:"<<GetArea()<<endl<<endl<<endl<<endl;
}
void Rectangle::Set()
{
    int r0,r2;
    cout<<"请输入矩形的长和宽:"<<endl;
    cin>>r0>>r2;
    Length=r0;Width=r2;
}

void Triangle::Show()
{
    cout<<"Triangle:"<<endl;
    cout<<"第一个坐标为："<<"("<<A_x<<","<<A_y<<")"<<endl;
    cout<<"第二个坐标为："<<"("<<B_x<<","<<B_y<<")"<<endl;
    cout<<"第三个坐标为："<<"("<<C_x<<","<<C_y<<")"<<endl;
    cout<<"GetArea:"<<GetArea()<<endl;
}
void Triangle::Set()
{
    int x1,y1,x2,y2,x3,y3;
    cout<<"请输入三角形的顶点坐标(x1,y1),(x2,y2),(x3,y3):"<<endl;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    A_x=x1;A_y=y1;B_x=x2;B_y=y2;C_x=x3;C_y=y3;
}

int main()
{
    //int i;
    int x,y,r;
    int rl,r2;
    int x1,y1,x2,y2,x3,y3;
    Shape *p1;
    cout<<"请输入圆心的坐标x,y以及半径r:"<<endl;
    cin>>x>>y>>r;
    Circle Cir(x,y,r);
    cout<<"请输入矩形的长和宽:"<<endl;
    cin>>rl>>r2;
    Rectangle Rec(rl,r2);
    cout<<"请输入三角形的顶点坐标(x1,y1),(x2,y2),(x3,y3):"<<endl;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    Triangle Tri(x1,y1,x2,y2,x3,y3);
    p1=&Cir;
    p1->Show();
    p1=&Rec;
    p1->Show();
    p1=&Tri;
    p1->Show();
    /*cout<<"\n是否修改数据?\n(0:否\t1:圆\t2:长方形\t3:三角形)"<<endl;
    cin>>i;
    if(i==0)
        return 0;
    if(i==1)
        Cir.Set();
    if(i==2)
        Rec.Set();
    if(i==3)
        Tri.Set();*/
    return 0;
}

    virtual double GetArea() const =0;
    virtual void Show() =0;
    virtual void Set() =0;
};
class Circle:public Shape
{
public:
    Circle(double x,double y,double radius)
    {   X=x;Y=y;Radius=radius; }
    virtual double GetArea() const {return 3.14159*Radius*Radius;};
    void Show();
    void Set();
private:
    double X,Y,Radius;
};
class Rectangle:public Shape
{
public:
    Rectangle(double length,double width)
    {   Length=length;Width=width;  }
    virtual double GetArea() const {return Width*Length;}
    void Show();
    void Set();
private:
    double Width,Length;
};

class Triangle:public Shape
{
public:
    Triangle(double a_x,double a_y,double b_x,double b_y,double c_x,double c_y)
    {   A_x=a_x;A_y=a_y;B_x=b_x;B_y=b_y;C_x=c_x;C_y=c_y;  }
    virtual double GetArea() const
    {
    double a,b,c,p,area;
    a=sqrt(pow(A_x-B_x,2)+pow(A_y-B_y,2));
    b=sqrt(pow(B_x-C_x,2)+pow(B_y-C_y,2));
    c=sqrt(pow(C_x-A_x,2)+pow(C_y-A_y,2));
    if(a+b>c&&abs(a-b<c))
    {
        p=(a+b+c)/2;
        area=sqrt( p*(p-a)*(p-b)*(p-c) );
        return area;
    }
    else
        cout<<"数据输入有误."<<endl;
    }
    void Show();
    void Set();
private:
    double A_x,A_y,B_x,B_y,C_x,C_y;
};

void Circle::Show()
{
    cout<<endl<<endl;
    cout<<"Circle:"<<endl<<"x为:"<<X<<endl<<"y为:"<<Y<<endl<<"radius为:"<<Radius<<endl;
    cout<<"GetArea:"<<GetArea()<<endl<<endl<<endl<<endl;
}
void Circle::Set()
{
    int x1,y1,r1;
    cout<<"请输入圆心的坐标x,y以及半径r:"<<endl;
    cin>>x1>>y1>>r1;
    X=x1;Y=y1;Radius=r1;
}

void Rectangle::Show()
{
    cout<<"Rectangle:"<<endl<<"length为:"<<Length<<endl<<"width为:"<<Width<<endl;
    cout<<"GetArea:"<<GetArea()<<endl<<endl<<endl<<endl;
}
void Rectangle::Set()
{
    int r0,r2;
    cout<<"请输入矩形的长和宽:"<<endl;
    cin>>r0>>r2;
    Length=r0;Width=r2;
}

void Triangle::Show()
{
    cout<<"Triangle:"<<endl;
    cout<<"第一个坐标为："<<"("<<A_x<<","<<A_y<<")"<<endl;
    cout<<"第二个坐标为："<<"("<<B_x<<","<<B_y<<")"<<endl;
    cout<<"第三个坐标为："<<"("<<C_x<<","<<C_y<<")"<<endl;
    cout<<"GetArea:"<<GetArea()<<endl;
}
void Triangle::Set()
{
    int x1,y1,x2,y2,x3,y3;
    cout<<"请输入三角形的顶点坐标(x1,y1),(x2,y2),(x3,y3):"<<endl;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    A_x=x1;A_y=y1;B_x=x2;B_y=y2;C_x=x3;C_y=y3;
}

int main()
{
    int i;
    int x,y,r;
    int rl,r2;
    int x1,y1,x2,y2,x3,y3;
    Shape *p1;
    cout<<"请输入圆心的坐标x,y以及半径r:"<<endl;
    cin>>x>>y>>r;
    Circle Cir(x,y,r);
    cout<<"请输入矩形的长和宽:"<<endl;
    cin>>rl>>r2;
    Rectangle Rec(rl,r2);
    cout<<"请输入三角形的顶点坐标(x1,y1),(x2,y2),(x3,y3):"<<endl;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    Triangle Tri(x1,y1,x2,y2,x3,y3);
    p1=&Cir;
    p1->Show();
    p1=&Rec;
    p1->Show();
    p1=&Tri;
    p1->Show();
    cout<<"\n是否修改数据?\n(0:否\t1:圆\t2:长方形\t3:三角形)"<<endl;
    cin>>i;
    if(i==0)
        return 0;
    if(i==1)
        Cir.Set();
    if(i==2)
        Rec.Set();
    if(i==3)
        Tri.Set();
    return 0;
}
