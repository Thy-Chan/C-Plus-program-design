#include <iostream>
using namespace std;
struct Student
{
    int num;
    char classname[20];
    char name[20];
    float score[3];
    float aver_score;
};
int enter(Student *stu);
void averagescore(Student *stu, int number);
int averagescorest(Student *stu, int number);

int main()
{
    int i;
    int number,k;
    Student stu[100];
    number=enter(stu);
    averagescore(stu, number);
    k=averagescorest(stu, number);
    cout<<"\n############################################################\n"<<endl;
    cout<<"The students' averagescore information are as follows:"<<endl;
    for(i=0;i<number;i++)
    {
	cout<<"NO."<<i+1<<endl
	    <<"classname:"<<stu[i].classname<<endl
	    <<"name:"<<stu[i].name<<endl
	    <<"average score:"<<stu[i].aver_score<<endl<<endl;
    }
    cout<<"\n############################################################\n"<<endl;
    cout<<"The student of hightest average score is NO."
        <<k+1<<endl
    	<<"num:"<<stu[k].num<<endl
	    <<"classname:"<<stu[k].classname<<endl
	    <<"name:"<<stu[k].name<<endl
	    <<"Cour1:"<<stu[k].score[0]<<"\nCour2:"<<stu[k].score[1]<<"\nCour3:"<<stu[k].score[2]<<endl
	    <<"average score:"<<stu[k].aver_score<<endl;

    return 0;
}

int enter(Student *stu)
{
    int stu_number = 0 ;
    cout<<"please enter student number:";
    cin>>stu_number ;
    for( int i = 0; i<stu_number; i++)
    {
        cout<< "please enter NO. "<< i+1 << " student info : num classname name score1 score2 score3"<<endl;
    	cin>>stu[i].num>>stu[i].classname>>stu[i].name;
    	cin>>stu[i].score[0]>>stu[i].score[1]>>stu[i].score[2];
    }
    return stu_number;
}

void averagescore(Student *stu, int number)
{
    for (int i=0;i<number;i++)
        stu[i].aver_score = (stu[i].score[0]+ stu[i].score[1]+stu[i].score[2])/3.0;
}

int averagescorest(Student *stu, int number)
{
    int k=0;
    for(int i=0;i<number;i++)
    {
        if(stu[k].aver_score<=stu[i].aver_score)
            k=i;
    }
    return k;
}
