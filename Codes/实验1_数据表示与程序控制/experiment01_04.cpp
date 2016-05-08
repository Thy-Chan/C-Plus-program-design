#include<iostream>
using namespace std;
double situation(int h,double w);

int main(void)
{
	int h;                          //每周工作时间
	double w,m;                     //每小时的工资数,总工资数
	cout<<"Please input employer's work time and wage_per_hour:"<<endl;
	cin>>h>>w;                      //用户输入时间和工资数
	m=situation(h,w);
	cout<<"The employee's wage :"<<m<<endl;
	return 0;
}

double situation(int h,double w)
{
    double m;
    if(h>=0&&h<=40&&w>=0)                 //工作时间在40h之内
        	m=h*w;
    else if(h>40&&h<=60&&w>=0)            //工作时间在40~60之间
        	m=40*w+(h-40)*1.5*w;
   	else if(h>60&&w>=0)                  //工作时间大于60h
        	m=40*w+20*1.5*w+(h-60)*3*w;
	else
        {
            cout<<"input error"<<endl;      //否则输入错误
            exit(0);
        }
	return m;
}
