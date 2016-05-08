#include<iostream>
using namespace std;
double calculate();
int main()
{
	cout<<"Please input arithmetic expression(input 0 0 0 to exit): "<<endl;
    calculate();
    return 0;
}

double calculate()
{
    double operand1,operand2;
    char op;
    double result;
    cin>>operand1>>op>>operand2;
    while(operand1!=0&&op!=0&&operand2!=0)
    {
        switch(op) //ÅĞ¶ÏÔËËã·û
        {
            case '+':   result = operand1 + operand2;
                        cout<<operand1<< op << operand2<<"="<<result<<endl;
                        break;
            case '-':   result = operand1 - operand2;
                        cout<<operand1<< op << operand2<<"="<<result<<endl;
                        break;
            case '*':   result = operand1 * operand2;
                        cout<<operand1<< op << operand2<<"="<<result<<endl;
                        break;
            case '/':   result = operand1 / operand2;
                        cout<<operand1<< op << operand2<<"="<<result<<endl;
                        break;
            default:    cout<<"Input error@#!"<<endl;
        }
        cout<<"Continue!Please input arithmetic expression: ";
        cin>>operand1>>op>>operand2;
    }
}
