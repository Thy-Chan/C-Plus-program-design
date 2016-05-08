#include <iostream>
#include <cstring>
#define N 100
using namespace std;
class Date
{
public:
    void SetYear(int x) {year=x;}
    void SetMonth(int x) {month=x;}
    void SetDay(int x) {day=x;}
    int GetYear() {return year;}
    int GetMonth() {return month;}
    int GetDay() {return day;}
    Date():year(),month(),day(){}
    Date(int y, int m,int d)
    {
        year=y;
        month=m;
        day=d;
    }
private:
    int year;
    int month;
    int day;
};
class employee
{
private:
    int ID;
    char name[16];
    char sex[8];
    Date birth;
    char pos[32];
public:
    void Setname(char* n){strcpy(name,n);}
    void Setpos(char* n){strcpy(pos,n);}
    employee():ID(0),birth(2000,1,1)
    {
        strcpy(name,"name");
        strcpy(sex,"sex");
        strcpy(pos,"pos");
    }
    employee& operator=(employee& x)
    {
        ID=x.ID;
        birth.SetYear(x.birth.GetYear());
        birth.SetMonth(x.birth.GetMonth());
        birth.SetDay(x.birth.GetDay());
        strcpy(name,x.name);
        strcpy(sex,x.sex);
        strcpy(pos,x.pos);
    }
    employee(int n, char* str, char* y,Date day, char* p)
    {
        ID = n;
        strcpy(name,str);
        strcpy(sex,y);
        birth=day;
        strcpy(pos,p);
    }
    friend string Getname(employee x)
    {
        string name;
        int i;
        for(i=0;x.name[i]!='\0';i++)
            name+=x.name[i];
        return name;
    }
    friend int GetID(employee x)
    {
        return x.ID;
    }

    friend string Getsex(employee x)
    {
        string sex;
        int i;
        for(i=0;x.sex[i]!='\0';i++)
            sex+=x.sex[i];
        return sex;
    }
    friend Date Getbirth(employee x)
    {
        return x.birth;
    }

    friend string Getpos(employee x)
    {
        string pos;
        int i;
        for(i=0;x.pos[i]!='\0';i++)
            pos+=x.pos[i];
        return pos;
    }
};
int main()
{
    employee *persons[N];
    employee temp;
    Date day;
    int num=0;
    int i,choose=1,choose1=0;
    int n,y,m,d;
    char str[16];
    char s[8];
    char p[32];
    cout<<"\n========人员管理========"<<endl;
    cout<<"\t1：录入\n \t2：显示\n \t3：修改\n \t4：查询\n \t0：退出"<<endl;
    cout<<"========================"<<endl;
    cout<<"\n请选择:";
    cin>>choose;
    while(choose!=0)
    {
        switch(choose)
        {
        case 1:
            if(num==N)
            {
                cout<<"full!\n";
                continue;
            }
            cout<<"输入员工编号：";    cin>>n;
            cout<<"输入员工生日：";    cin>>y>>m>>d;
            cout<<"输入员工姓名：";    cin>>str;
            cout<<"输入员工性别：";    cin>>s;
            cout<<"输入员工职位：";    cin>>p;
            persons[num++]=new employee(n,str,s,Date(y,m,d),p);
            break;
        case 2:
            cout<<"编号\t"<<"姓名\t"<<"性别\t"<<"生日\t\t"<<"职务"<<endl;
            for(i=0;i<num;i++)
            {
                cout<<GetID(*persons[i])<<"\t"<<Getname(*persons[i])<<"\t"<<Getsex(*persons[i])<<"\t"<<Getbirth(*persons[i]).GetYear()
                    <<" "<<Getbirth(*persons[i]).GetMonth()<<" "<<Getbirth(*persons[i]).GetDay()<<"\t"<<Getpos(*persons[i])<<endl;
            }
            break;
        case 3:
            cout<<"输入员工编号:";
            cin>>n;
            for(i=0;i<=num;i++)
            {
                if(n==GetID(*persons[i]))
                {
                    cout<<"\n\n1：名字修改 2：职位修改"<<endl;
                    cout<<"选择您要进行的修改方式:"<<endl;
                    cin>>choose1;
                    switch(choose1)
                    {
                    case 1:
                        cout<<"输入员工姓名:";
                        cin>>str;
                        persons[num-1]=new employee(n,str,s,Date(y,m,d),p);
                        break;
                    case 2:
                        cout<<"输入员工职位:";
                        cin>>p;
                        persons[num-1]=new employee(n,str,s,Date(y,m,d),p);
                        break;
                    }
                    break;
                }
                else cout<<"该员工不存在"<<endl;
            }
            break;
        case 4:
            cout<<"输入员工编号:";
            cin>>n;
            for(i=0;i<=num;i++)
            {
                if(n==GetID(*persons[i]))
                {
                    cout<<"编号\t"<<"姓名\t"<<"性别\t"<<"生日\t\t"<<"职务"<<endl;
                    cout<<GetID(*persons[i])<<"\t"<<Getname(*persons[i])<<"\t"<<Getsex(*persons[i])<<"\t"<<Getbirth(*persons[i]).GetYear()
                        <<" "<<Getbirth(*persons[i]).GetMonth()<<" "<<Getbirth(*persons[i]).GetDay()<<"\t"<<Getpos(*persons[i])<<endl;
                    break;
                }
            }
            break;
        default: cout<<"输入错误，请重新输入！"<<endl;
                break;
        }
    cout<<"\n========人员管理========"<<endl;
    cout<<"\t1：录入\n \t2：显示\n \t3：修改\n \t4：查询\n \t0：退出"<<endl;
    cout<<"======================="<<endl;
    cout<<"\n请选择:";
    cin>>choose;
    }
    return 0;
}
