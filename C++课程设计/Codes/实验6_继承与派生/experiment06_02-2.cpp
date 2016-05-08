#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Teacher
{
public:
    Teacher(string name,int age,string sex,string address,long int tel,string title):name(name),age(age),sex(sex),address(address),tel(tel),title(title){}
    void display();
protected:
    string name;
    int age;
    string sex;
    string address;
    long int tel;
    string title;
};

class Cadre
{
public:
    Cadre(string name,int age,string sex,string address,long int tel,string post):name(name),age(age),sex(sex),address(address),tel(tel),post(post){}
    void display();
protected:
    string name;
	int age;
	string sex;
	string address;
	long int tel;
	string post;
};

class Teacher_Cadre:public Teacher,public Cadre
{
public:
	Teacher_Cadre(string name,int age,string sex,string address,long int tel,string title,string post,long int wages);
	void show();
protected:
	long int wages;
};

void Teacher::display()
{
	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "sex: " << sex << endl;
	cout << "address: " << address << endl;
	cout << "tel: " << tel << endl;
	cout << "title: " << title << endl;
}

void Cadre::display()
{
	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "sex: " << sex << endl;
	cout << "address: " << address << endl;
	cout << "tel: " << tel << endl;
	cout << "post: " << post << endl;
}
Teacher_Cadre::Teacher_Cadre(string name,int age,string sex,string address,long int tel,string title, string post,long int wages):Teacher(name,age,sex,address,tel,title),Cadre(name,age,sex,address,tel,post)
{
	Teacher_Cadre::wages=wages;
}
void Teacher_Cadre::show()
{
	Teacher::display();
	cout << "post: " << Cadre::post << endl;
	cout << "wages: " << Teacher_Cadre::wages << endl;
}

int main( )
{
	int i=0,NUM=0;
    string name;
    int age;
    string sex;
    string address;
    long int tel;
    string title;
    string post;
    long int wages;
    cout<<"请输入人数:"<<endl;
    cin>>NUM;
    Teacher_Cadre *Tc[NUM];
    for(i=0;i<NUM;i++)
    {
        cout<<"请输入第"<<i+1<<"名教师干部的姓名,年龄,性别,家庭住址,电话,职称,职务,工资:"<<endl;
        cin>>name>>age>>sex>>address>>tel>>title>>post>>wages;
        Tc[i]=new Teacher_Cadre(name,age,sex,address,tel,title,post,wages);
    }
    cout<<"========================== ==============================================="<<endl;
    for(i=0;i<NUM;i++)
    {
        cout<<endl;
        Tc[i]->show();
    }
    return 0;
}
