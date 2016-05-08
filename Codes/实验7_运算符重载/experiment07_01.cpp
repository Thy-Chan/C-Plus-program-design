#include <iostream>
#include <cstring>
using namespace std;
class String
{
public:
    String(char *str)
    {
        size=strlen(str);
        p=new char[size+1];
        p=str;
    }
    ~String();
    friend bool operator>(String &string1, String &string2);
    friend bool operator<(String &string1, String &string2);
    friend bool operator==(String &string1, String &string2);
    void display(){cout<<p;};
private:
    char *p;
    int size;
};

bool operator>(String &string1, String &string2)
{
    if(strcmp(string1.p, string2.p)>0)
        return true;
    else
        return false;
}
bool operator<(String &string1, String &string2)
{
    if(strcmp(string1.p, string2.p)<0)
        return true;
    else
        return false;
}
bool operator==(String &string1, String &string2)
{
    if(strcmp(string1.p, string2.p)==0)
        return true;
    else
        return false;
}

void compare(String &string1, String &string2)
{
    if(operator>(string1, string2)==1)
    {
        string1.display( );
        cout<<">";
        string2.display( );
    }
    else    if(operator<(string1, string2)==1)
    {
        string1.display( );
        cout<<"<";
        string2.display( );
    }
    else    if(operator==(string1, string2)==1)
    {
        string1.display( );
        cout<<"==";
        string2.display( );
    }
    cout<<endl;
}
String::~String()
{
    delete[] p;
    p=NULL;
}
int main( )
{
    String string1("China"), string2("china"), string3("National"), string4("Computer"), string5("Examination"), string6("Rank"), string7("swust"), string8("swust");
    compare(string1, string2);
    compare(string3, string4);
    compare(string5, string6);
    compare(string7, string8);
    return 0;
}
