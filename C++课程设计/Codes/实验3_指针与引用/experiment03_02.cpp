#include<iostream>
using namespace std;

void averscore(float (*p)[7]);
float avercourse(float (*p)[7],int n);
int main()
{
    int i,j,n;
    float stu_info[5][7];
    float aver;
    cout<<"Please input 5 student's student ID and 5 scores£º"<<endl;
    for(i=0;i<5;i++)
    {
        j=0;
        cout<<i+1<<" student ID: ";
        cin>>stu_info[i][j];
        cout<<"    5 scores: ";
        for(j=1;j<6;j++)
            cin>>stu_info[i][j];
    }
    averscore(stu_info);
    cout<<"\n\t\t\tCour1\tCour2\tCour3\tCour4\tCour5\tAverage Course";
    for(i=0;i<5;i++)
    {
        j=0;
        cout<<endl<<i+1<<" student ID:\t"<<stu_info[i][j];
        for(j=1;j<6;j++)
            cout<<"\t"<<stu_info[i][j];
        cout<<"\t    "<<stu_info[i][6];
    }
    cout<<"\n\nPlease input the Course number you want to seek: ";
    cin>>n;
    aver=avercourse(stu_info,n);
    cout<<"The Cour"<<n<<"'s score average is "<<aver<<endl;
    return  0;
}

void averscore(float (*p)[7])
{
    int i,j;
    float sum;
    for(i=0;i<5;i++)
    {
        sum=0;
        for(j=1;j<6;j++)
            sum+=*(*(p+i)+j);
        *(*(p+i)+6)=sum/5;
    }
}

float avercourse(float (*p)[7],int n)
{
    int i;
    float sum=0;
    for(i=0;i<5;i++)
        sum+=*(*(p+i)+n);
    return sum/5;
}
