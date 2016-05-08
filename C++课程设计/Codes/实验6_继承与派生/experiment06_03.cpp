#include<iostream>
#include<string>
using namespace std;
class Date {
public:
    void SetYear(int x){year=x;}
    void SetMonth(int x){month=x;}
    void SetDay(int x) {day=x;}
    int GetYear() {return year;}
    int GetMonth() {return month;}
    int GetDay() {return day;}
private:
    int year;
    int month;
    int day;
};
class employee
{
public:
    void display(){cout<<"编号:"<<num<<"姓名:"<<nam<<"性别:"<<sex<<"出生日期:"<<birth. GetYear()<<"-"<<birth.GetMonth()<<"-"<<birth.GetDay()<<"职位:"<<position;}
protected:
    int num;
    string nam;
    string sex;
    Date birth;
    string position;
    float salary;
};
class manager:virtual public employee
{
public:
    void set_manager(int n,string na,string se,int y,int m,int d,string pos)
    {
        num=n;
        nam=na;
        sex=se;
        birth.SetYear(y);
        birth.SetMonth(m);
        birth.SetDay(d);
        position=pos;
    }
    void display()
   {
        employee::display();            }
        void total_salary()
        {
            salary=8000;
            cout<<"经理月薪：";
            cout<< salary<<"元";
        }
};
class technician:virtual public employee
{
protected:
    float Time;
public:
    float t;
    void set_technician(int n,string na,string se,int y,int m,int d,string pos,float t)
    {
        num=n;
        nam=na;
        sex=se;
        birth.SetYear(y);
        birth.SetMonth(m);
        birth.SetDay(d);
        position=pos;
        Time=t;
    }
    void display()
    {
        employee::display();
        cout<<"工作时间:"<<Time<<endl;
    }
    void total_salary()
    {
        salary= 25*Time;
        cout<<"技术人员月薪：";
        cout<<salary<<"元";
    }
};
class  saleman :virtual public employee
{
protected:
    float sale;
    string dep;
public:
    void set_saleman(int n,string na,string se,int y,int m,int d,string pos,float sale1,string de)
    {
        num=n;
        nam=na;
        sex=se;
        birth.SetYear(y);
        birth.SetMonth(m);
        birth.SetDay(d);
        position=pos;
        sale=sale1;
        dep=de;
    }
    void display()
    {
        employee::display();
        cout<<position<<"销售额:"<<sale<<"所属部门:"<<dep<<endl;
    }
    void  total_salary ()
    {
        salary=sale*0.04;
        cout<<"销售员月薪:"<<salary<<"元";
    }
};
class salesmanager:public manager,public saleman
{
public:
    void total_salary ()
    {
        salary=sale*0.05+5000;
        cout<<"销售经理月薪:" << salary<<"元";
    }
};
int main ()
{
    manager m1;
    technician tec;
    saleman s;
    salesmanager sg;
    int n,y,m,d,choose,choose1; string str,se, p;
    cout<<"\n\t\t================================================="<<endl;
    cout<<"\t\t1:输入信息与显示        2:个人月薪      0：退出"<<endl;
    cout<<"\t\t=================================================="<<endl;
    cout<<"\n输入您要进行的操作:";
    cin>>choose;  while(choose!=0)
    {
        switch(choose)
        {
            case 1:     cout<<"输入员工编号：";
                        cin>>n;      cout<<"输入员工出生日期：";
                        cin>>y>>m>>d;      cout<<"输入员工姓名：";
                        cin>>str;      cout<<"输入员工性别：";
                        cin>>se;      cout<<"输入员工职位：";
                        cin>>p;
                        if (p=="manager")
                        {
                            m1.set_manager(  n,  str, se,y,m,d,p);
                            m1.display();
                        }
                        else if(p=="technician")
                        {
                            float t;
                            cout<<"输入时间:";
                            cin>>t;
                            tec.set_technician( n,str, se,y,m,d, p, t);
                            tec.display();
                        }
                        else if(p=="saleman")
                        {
                            float sale2;
                            string de;
                            cout<<"销售额：";
                            cin >> sale2;
                            cout<<"所属部门：";
                            cin>>de;
                            s.set_saleman( n, str, se,y,m,d, p, sale2, de);
                            s.display();
                        }
                        else
                        {
                            float sale1;
                            string de;
                            cout<<"销售额："  ;
                            cin>>sale1;
                            cout<<"所属部门：";
                            cin>>de;
                            sg.set_saleman( n,str, se,y,m,d, p, sale1, de);
                            s.display();
                        }
                        break;
            case 2:     cout<<"\n\t\t===================================================="<<endl;
                        cout<<"\t\t11: 经理    12: 技术人员     13：销售员   14:销售经理 "<<endl;
                        cout<<"\t\t============================================================"<<endl;
                        cout<<"\n输入您要进行的操作:";
                        cin>>choose1;
                        while(choose1!=0)
                        {
                            switch(choose1)
                            {
                                case 11:    m1.total_salary();
                                            break;
                                case 12:
                                            tec.total_salary();
                                            break;
                                case 13:
                                            s.total_salary();
                                            break;
                                case 14:
                                            sg.total_salary();
                                            break;
                            }
                        choose1=0;
                        }
                        break;
        }
        cout<<"\n\t\t=================================================="<<endl;
        cout<<"\t\t1:输入信息与显示        2:个人月薪      0：退出"<<endl;
        cout<<"\t\t=================================================="<<endl;
        cout<<"\n输入您要进行的操作:";
        cin>>choose;
    }
    return 0;
 }