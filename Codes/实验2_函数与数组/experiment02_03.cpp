#include<iostream>

int soft(int a[],int n);
int search(int a[],int n,int key);
using namespace std ;
int main()
{
    int a[50];
    int n;
    cout<<"������ѧ����������";
    cin>>n;
    cout<<"����������ѧ���ĳɼ�(�ɼ���0~100֮��)��"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    soft(a,n);
    int m;
    cout<<"\n������������ҵĳɼ���";
    cin>>m;
    int k=search(a,n,m);
    if(k>=0)
        cout<<"�óɼ��ǵ�"<<k+1<<"��";
    else cout<<"�޴˳ɼ�!";
    return 0;
}

int soft(int a[],int n)
{
    bool flag=false;
    int i,j,m;
    for(i=0;i<n;i++)
        if(flag==false)
        {
            flag=true;
            for(j=i+1;j<n;j++)
            {
                if(a[i]<a[j])
                {
                    m=a[i];
                    a[i]=a[j];
                    a[j]=m;
                }
                flag=false;
            }
        }
    for(j=0;j<=n%10;j++)
    {
        for(i=j*10;(i<(j+1)*10)&&i<n;i++)
            cout<<a[i]<<" ";
    }
    return 0;
}

int search(int a[],int n,int key)
{
    int lower,upper,m;
    lower=0;
    upper=n-1;
    while(upper>=lower)
    {
        m=(lower+upper)/2;
        if(key==a[m])
            return m;
        else if(key>a[m])
            upper=m-1;
        else lower=m+1;
    }
    return -1;
}
