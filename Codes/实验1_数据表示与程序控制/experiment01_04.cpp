#include<iostream>
using namespace std;
double situation(int h,double w);

int main(void)
{
	int h;                          //ÿ�ܹ���ʱ��
	double w,m;                     //ÿСʱ�Ĺ�����,�ܹ�����
	cout<<"Please input employer's work time and wage_per_hour:"<<endl;
	cin>>h>>w;                      //�û�����ʱ��͹�����
	m=situation(h,w);
	cout<<"The employee's wage :"<<m<<endl;
	return 0;
}

double situation(int h,double w)
{
    double m;
    if(h>=0&&h<=40&&w>=0)                 //����ʱ����40h֮��
        	m=h*w;
    else if(h>40&&h<=60&&w>=0)            //����ʱ����40~60֮��
        	m=40*w+(h-40)*1.5*w;
   	else if(h>60&&w>=0)                  //����ʱ�����60h
        	m=40*w+20*1.5*w+(h-60)*3*w;
	else
        {
            cout<<"input error"<<endl;      //�����������
            exit(0);
        }
	return m;
}
