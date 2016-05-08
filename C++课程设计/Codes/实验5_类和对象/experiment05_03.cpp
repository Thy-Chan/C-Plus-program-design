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
    cout<<"\n========��Ա����========"<<endl;
    cout<<"\t1��¼��\n \t2����ʾ\n \t3���޸�\n \t4����ѯ\n \t0���˳�"<<endl;
    cout<<"========================"<<endl;
    cout<<"\n��ѡ��:";
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
            cout<<"����Ա����ţ�";    cin>>n;
            cout<<"����Ա�����գ�";    cin>>y>>m>>d;
            cout<<"����Ա��������";    cin>>str;
            cout<<"����Ա���Ա�";    cin>>s;
            cout<<"����Ա��ְλ��";    cin>>p;
            persons[num++]=new employee(n,str,s,Date(y,m,d),p);
            break;
        case 2:
            cout<<"���\t"<<"����\t"<<"�Ա�\t"<<"����\t\t"<<"ְ��"<<endl;
            for(i=0;i<num;i++)
            {
                cout<<GetID(*persons[i])<<"\t"<<Getname(*persons[i])<<"\t"<<Getsex(*persons[i])<<"\t"<<Getbirth(*persons[i]).GetYear()
                    <<" "<<Getbirth(*persons[i]).GetMonth()<<" "<<Getbirth(*persons[i]).GetDay()<<"\t"<<Getpos(*persons[i])<<endl;
            }
            break;
        case 3:
            cout<<"����Ա�����:";
            cin>>n;
            for(i=0;i<=num;i++)
            {
                if(n==GetID(*persons[i]))
                {
                    cout<<"\n\n1�������޸� 2��ְλ�޸�"<<endl;
                    cout<<"ѡ����Ҫ���е��޸ķ�ʽ:"<<endl;
                    cin>>choose1;
                    switch(choose1)
                    {
                    case 1:
                        cout<<"����Ա������:";
                        cin>>str;
                        persons[num-1]=new employee(n,str,s,Date(y,m,d),p);
                        break;
                    case 2:
                        cout<<"����Ա��ְλ:";
                        cin>>p;
                        persons[num-1]=new employee(n,str,s,Date(y,m,d),p);
                        break;
                    }
                    break;
                }
                else cout<<"��Ա��������"<<endl;
            }
            break;
        case 4:
            cout<<"����Ա�����:";
            cin>>n;
            for(i=0;i<=num;i++)
            {
                if(n==GetID(*persons[i]))
                {
                    cout<<"���\t"<<"����\t"<<"�Ա�\t"<<"����\t\t"<<"ְ��"<<endl;
                    cout<<GetID(*persons[i])<<"\t"<<Getname(*persons[i])<<"\t"<<Getsex(*persons[i])<<"\t"<<Getbirth(*persons[i]).GetYear()
                        <<" "<<Getbirth(*persons[i]).GetMonth()<<" "<<Getbirth(*persons[i]).GetDay()<<"\t"<<Getpos(*persons[i])<<endl;
                    break;
                }
            }
            break;
        default: cout<<"����������������룡"<<endl;
                break;
        }
    cout<<"\n========��Ա����========"<<endl;
    cout<<"\t1��¼��\n \t2����ʾ\n \t3���޸�\n \t4����ѯ\n \t0���˳�"<<endl;
    cout<<"======================="<<endl;
    cout<<"\n��ѡ��:";
    cin>>choose;
    }
    return 0;
}
