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
    virtual void display() =0;
    virtual void pay() =0;
    virtual void promote() =0;
protected:
    int Num;
    string Nam;
    string Sex;
    Date birth;
    string Position;
    float Salary;
};
class manager:virtual public employee
{
public:
    void set_manager(int n,string na,string se,int y,int m,int d,string pos)
    {
        Num=n;
        Nam=na;
        Sex=se;
        birth.SetYear(y);
        birth.SetMonth(m);
        birth.SetDay(d);
        Position=pos;
    }
    void display()
   {
        cout<<"���:"<<Num<<"����:"<<Nam<<"�Ա�:"<<Sex<<"��������:"<<birth. GetYear()<<"-"<<birth.GetMonth()<<"-"<<birth.GetDay()<<"ְλ:"<<Position;            }
    void pay()
    {
        Salary=8000;
        cout<<"������н��";
        cout<< Salary<<"Ԫ";
    }
    void promote()
    {
        cout<<"��������ĺ��ְλ"<<endl;
        string pos2;
        cin>>pos2;
        Position=pos2;
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
        Num=n;
        Nam=na;
        Sex=se;
        birth.SetYear(y);
        birth.SetMonth(m);
        birth.SetDay(d);
        Position=pos;
        Time=t;
    }
    void display()
    {
        cout<<"���:"<<Num<<"����:"<<Nam<<"�Ա�:"<<Sex<<"��������:"<<birth. GetYear()<<"-"<<birth.GetMonth()<<"-"<<birth.GetDay()<<"ְλ:"<<Position;
        cout<<"����ʱ��:"<<Time<<endl;
    }
    void pay()
    {
        Salary= 25*Time;
        cout<<"������Ա��н��";
        cout<<Salary<<"Ԫ";
    }
    void promote()
    {
        cout<<"��������ĺ��ְλ"<<endl;
        string pos3;
        cin>>pos3;
        Position=pos3;
    }
};
class  saleman :virtual public employee
{
protected:
    float Sale;
    string Dep;
public:
    void set_saleman(int n,string na,string se,int y,int m,int d,string pos,float sale1,string de)
    {
        Num=n;
        Nam=na;
        Sex=se;
        birth.SetYear(y);
        birth.SetMonth(m);
        birth.SetDay(d);
        Position=pos;
        Sale=sale1;
        Dep=de;
    }
    void display()
    {
        cout<<"���:"<<Num<<"����:"<<Nam<<"�Ա�:"<<Sex<<"��������:"<<birth. GetYear()<<"-"<<birth.GetMonth()<<"-"<<birth.GetDay()<<"ְλ:"<<Position;
        cout<<Position<<"���۶�:"<<Sale<<"��������:"<<Dep<<endl;
    }
    void  pay()
    {
        Salary=Sale*0.04;
        cout<<"����Ա��н:"<<Salary<<"Ԫ";
    }
    void promote()
    {
        cout<<"��������ĺ��ְλ"<<endl;
        string pos4;
        cin>>pos4;
        Position=pos4;
    }
};
class salesmanager:public saleman
{
public:
    void pay()
    {
        Salary=Sale*0.05+5000;
        cout<<"���۾�����н:" << Salary<<"Ԫ";
    }
    void promote()
    {
        cout<<"��������ĺ��ְλ"<<endl;
        string pos5;
        cin>>pos5;
        Position=pos5;
    }
};
int main ()
{
    manager m1;
    technician tec;
    saleman s;
    salesmanager sg;
    int n,y,m,d,choose,choose1; string str,se, p;
    cout<<"================================"<<endl;
    cout<<"\t1: ��������ʾ��Ϣ\n\t2: ������н\n\t3: ��ְ\n\t0: �˳�"<<endl;
    cout<<"=============================="<<endl;
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
            case 2:     cout<<"\t\t21: ����    22: ������Ա     23������Ա   24:���۾��� "<<endl;
                        cout<<"\n������Ҫ���еĲ���:";
                        cin>>choose1;
                        while(choose1!=0)
                        {
                            switch(choose1)
                            {
                                case 21:    m1.pay();
                                            break;
                                case 22:
                                            tec.pay();
                                            break;
                                case 23:
                                            s.pay();
                                            break;
                                case 24:
                                            sg.pay();
                                            break;
                            }
                        }
             case 3:    int i;
                        cout<<"���������޸ĵ�ְλ ��"<<endl;
                        cout<<"\t\t21: ����    22: ������Ա     23������Ա   24:���۾��� "<<endl;
                        cout<<"\n������Ҫ���еĲ���:";
                        cin>>i;
                        if(i==21)
                            m1.promote();
                        if(i==22)
                            tec.promote();
                        if(i==23)
                            s.promote();
                        if(i==24)
                        sg.promote();
             case 0:    return 0;
        }
        cout<<"================================"<<endl;
        cout<<"\t1: ��������ʾ��Ϣ\n\t2: ������н\n\t3: ��ְ\n\t0: �˳�"<<endl;
        cout<<"=============================="<<endl;
        cout<<"\n������Ҫ���еĲ���:";
        cin>>choose;
    }
    return 0;
 }
