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
    void display(){cout<<"���:"<<num<<"����:"<<nam<<"�Ա�:"<<sex<<"��������:"<<birth. GetYear()<<"-"<<birth.GetMonth()<<"-"<<birth.GetDay()<<"ְλ:"<<position;}
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
            cout<<"������н��";
            cout<< salary<<"Ԫ";
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
        cout<<"����ʱ��:"<<Time<<endl;
    }
    void total_salary()
    {
        salary= 25*Time;
        cout<<"������Ա��н��";
        cout<<salary<<"Ԫ";
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
        cout<<position<<"���۶�:"<<sale<<"��������:"<<dep<<endl;
    }
    void  total_salary ()
    {
        salary=sale*0.04;
        cout<<"����Ա��н:"<<salary<<"Ԫ";
    }
};
class salesmanager:public manager,public saleman
{
public:
    void total_salary ()
    {
        salary=sale*0.05+5000;
        cout<<"���۾�����н:" << salary<<"Ԫ";
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
    cout<<"\t\t1:������Ϣ����ʾ        2:������н      0���˳�"<<endl;
    cout<<"\t\t=================================================="<<endl;
    cout<<"\n������Ҫ���еĲ���:";
    cin>>choose;  while(choose!=0)
    {
        switch(choose)
        {
            case 1:     cout<<"����Ա����ţ�";
                        cin>>n;      cout<<"����Ա���������ڣ�";
                        cin>>y>>m>>d;      cout<<"����Ա��������";
                        cin>>str;      cout<<"����Ա���Ա�";
                        cin>>se;      cout<<"����Ա��ְλ��";
                        cin>>p;
                        if (p=="manager")
                        {
                            m1.set_manager(  n,  str, se,y,m,d,p);
                            m1.display();
                        }
                        else if(p=="technician")
                        {
                            float t;
                            cout<<"����ʱ��:";
                            cin>>t;
                            tec.set_technician( n,str, se,y,m,d, p, t);
                            tec.display();
                        }
                        else if(p=="saleman")
                        {
                            float sale2;
                            string de;
                            cout<<"���۶";
                            cin >> sale2;
                            cout<<"�������ţ�";
                            cin>>de;
                            s.set_saleman( n, str, se,y,m,d, p, sale2, de);
                            s.display();
                        }
                        else
                        {
                            float sale1;
                            string de;
                            cout<<"���۶"  ;
                            cin>>sale1;
                            cout<<"�������ţ�";
                            cin>>de;
                            sg.set_saleman( n,str, se,y,m,d, p, sale1, de);
                            s.display();
                        }
                        break;
            case 2:     cout<<"\n\t\t===================================================="<<endl;
                        cout<<"\t\t11: ����    12: ������Ա     13������Ա   14:���۾��� "<<endl;
                        cout<<"\t\t============================================================"<<endl;
                        cout<<"\n������Ҫ���еĲ���:";
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
        cout<<"\t\t1:������Ϣ����ʾ        2:������н      0���˳�"<<endl;
        cout<<"\t\t=================================================="<<endl;
        cout<<"\n������Ҫ���еĲ���:";
        cin>>choose;
    }
    return 0;
 }