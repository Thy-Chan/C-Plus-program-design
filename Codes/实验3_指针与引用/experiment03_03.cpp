#include<iostream>
using namespace std ;
int soft(int *a,int n);
int search(int *a,int n,int key);

int main()
{
    int a[50];
    static int n=15;
    cout<<"请输入"<<n<<"个数："<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    soft(a,n);
    int m;
    cout<<"请输入您想查找的数：";
    cin>>m;
    int k=search(a,n,m);
    if(k>=0)
        cout<<"该数是第"<<k+1<<"个元素的值";
    else cout<<"无此数!";
    return 0;
}

int soft(int *a,int n)
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
    for(j=0;j<=n;j++)
        for(i=j*10;(i<(j+1)*10)&&i<n;i++)
            cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

int search(int *a,int n,int key)
{
    int lower,upper,j;
    lower=0;
    upper=n-1;
    while(upper>=lower)
    {
        j=(lower+upper)/2;
        if(key==a[j])
            return j;
        else if(key>a[j])
            upper=j-1;
        else lower=j+1;
    }
    return -1;
}
