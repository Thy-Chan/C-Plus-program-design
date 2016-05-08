#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Student
{
public:
    Student();
    Student(string name);
    Student(long long number,string name,int birth,int grade=NULL,string classroom="U",string college="U",string major="U");
    void Show();
    void SetInfo(long long number,string name,int birth,int grade,string classroom,string college,string major);
private:
    long long number;
    string name;
    int birth;
    int grade;
    string classroom;
    string college;
    string major;
};

Student::Student()
{
    SetInfo(NULL,NULL,NULL,NULL,"U","U","U");
}
Student::Student(string name)
{
    SetInfo(NULL,name,NULL,NULL,"U","U","U");
}
Student::Student(long long number,string name,int birth,int grade,string classroom,string college,string major)
{
    SetInfo(number,name,birth,grade,classroom,college,major);
}
void Student::SetInfo(long long number,string name,int birth,int grade,string classroom,string college,string major)
{
    this->number=number;
    this->name=name;
    this->birth=birth;
    this->grade=grade;
    this->classroom=classroom;
    this->college=college;
    this->major=major;
}
void Student::Show()
{
    cout << "学号："<<this->number << endl;
    cout << "姓名："<<this->name << endl;
    cout << "出生日期："<<this->birth<< endl;
    cout << "年级："<<this->grade << "级"<<endl;
    cout << "班级："<<this->classroom << endl;
    cout << "学院："<<this->college << endl;
    cout << "专业："<<this->major << endl;
}
int main()
{
    int i=0,NUM=0;
    long long number;
    string name;
    int birth;
    int grade;
    string classroom;
    string college;
    string major;
    cout<<"请输入班级人数:"<<endl;
    cin>>NUM;
    Student *Stu[NUM];
    for(i=0;i<NUM;i++)
    {
        cout<<"请输入第"<<i+1<<"名学生的学号,姓名,出生日期,年级,班级,学院,专业:"<<endl;
        cin>>number>>name>>birth>>grade>>classroom>>college>>major;
        Stu[i]=new Student(number,name,birth,grade,classroom,college,major);
    }
    cout<<"=================================="<<endl;
    for(i=0;i<NUM;i++)
    {
        cout<<endl;
        Stu[i]->Show();
    }
    return 0;
}
