#include <iostream>
using namespace std;
int othersyeardays(int year);
int thisyeardays(int year,int month,int day);
int main()
{
    int year,month,day,s;
    cout<<"Please enter year month day(enter \"0 0 0\" to exit): ";
    cin>>year>>month>>day;
    while(year!=0&&month!=0&&day!=0)
    {
        s=thisyeardays(year,month,day)+othersyeardays(year);
        cout <<"The day is: "<<s%7<<endl;
        cout<<"Continue!Please enter year month day: ";
        cin>>year>>month>>day;
    }
    return 0;
}
int thisyeardays(int year,int month,int day)
{
    int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int s1=0,i;
    if((year%4==0&&year%100!=0)||year%400==0)
        mon[2]=29;
    for(i=1;i<month;i++)
        s1+=mon[i];
    s1+=day;
    return s1;
}
int othersyeardays(int year)
{
    int s2=0,y=1;
    for(y=1;y<year;y++)
    {
        if(( y%4==0 && y%100!=0 )||(y%400==0))
            s2+=366;
        else s2+=365;
    }
    return s2;
}
