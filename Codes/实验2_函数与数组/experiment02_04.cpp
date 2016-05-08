#include <iostream>

using namespace std;
int main(void)
{
	int a[3][3]={{1,2,4},{3,2,5},{1,2,1}};
	int b[3][3]={{1,1,1},{2,3,2},{3,3,3}};
	int c[3][3]={0};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
		}
	}

	cout<<"¾ØÕóa£º"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<"\n¾ØÕób£º"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<"\n¾ØÕóc£º"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}

}
