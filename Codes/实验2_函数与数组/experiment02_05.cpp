���������ַ����飬����strcat���������Լ�дһ����strcat�������ܵĺ�������
#include<iostream>
using namespace std;
int main()
{
	char a[30],b[30],c[60];
	int  i=0,j=0;
	cout<<"Please enter the string:\n";
	cin>>a>>b;
		while(a[i]!='\0') 
	 {  
		c[i]=a[i];i++;
	}
		while(b[j]!='\0')
	{
		c[i]=b[j];i++,j++;
	}
	c[i]='\0';
	cout<<c;
	cout<<endl; }

��2���ñ�׼���е�strcat����
#include<iostream>
using namespace std;
int main()
{	char a[30],b[30],c[60];	
	cout<<"Please enter the string:\n";
	cin>>a>>b;
	cout<<strcat(a,b)<<endl;
	return 0; }

��3����string���������ַ���������
#include<iostream>
#include<string>
using namespace std;
int main()
{	string a,b;
	cout<<"Please enter the string:\n";
	cin>>a>>b;
	cout<<a+b<<endl;
	return 0; }
