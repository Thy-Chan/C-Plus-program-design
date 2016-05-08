#include<iostream>
using namespace std;
class CTime
{
public:
    CTime(int h=0,int m=0,int s=0):hour(h),minute(m),second(s){}
    void Display(){cout<<hour<<":"<<minute<<":"<<second<<endl;}
    setHour(int hour){return hour;}
    setHinute(int minute){return minute;}
    setSecond(int second){return second;}
    CTime operator ++();
    CTime operator ++(int);
private:
    int hour;
    int minute;
    int second;
};
CTime CTime::operator ++()
{
    ++second;
    if(second>=60)
    {
        second-=60;
        minute+=1;
    }
    if(minute>=60)
    {
        minute-=60;
        hour+=1;
    }
    if(hour>=24)
        hour=0;
    return *this;
}
CTime CTime::operator ++(int)
{
    CTime temp=*this;
    if(second++>=60)
    {
        second-=60;
        minute+=1;
    }
    if(minute>=60)
    {
        minute-=60;
        hour+=1;
    }
    if(hour>=24)
        hour=0;
    return temp;
}
int main()
{
    CTime time1(23,59,58);
    cout<<"Ç°ÖÃ:"<<endl;
    for(int i=0;i<3;i++)
    {
        ++time1;
        time1.Display();
    }
    cout<<endl<<"ºóÖÃ£º"<<endl;
    CTime time2(23,59,58);
    for(int j=0;j<3;j++)
    {
        time2++;
        time2.Display();
    }
    return 0;
}
