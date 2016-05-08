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
    cout << "ѧ�ţ�"<<this->number << endl;
    cout << "������"<<this->name << endl;
    cout << "�������ڣ�"<<this->birth<< endl;
    cout << "�꼶��"<<this->grade << "��"<<endl;
    cout << "�༶��"<<this->classroom << endl;
    cout << "ѧԺ��"<<this->college << endl;
    cout << "רҵ��"<<this->major << endl;
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
    cout<<"������༶����:"<<endl;
    cin>>NUM;
    Student *Stu[NUM];
    for(i=0;i<NUM;i++)
    {
        cout<<"�������"<<i+1<<"��ѧ����ѧ��,����,��������,�꼶,�༶,ѧԺ,רҵ:"<<endl;
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
