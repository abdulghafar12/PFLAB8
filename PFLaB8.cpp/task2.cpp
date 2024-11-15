#include <iostream>
using namespace std;
int main()
{
    char opr;int num1,num2;
    cout<<"Enter the two number ";
    cin>>num1>>num2;
    cout << "Enter opeerator :";
    cin >>opr;
    switch (opr)
    {
    case '+':
        cout <<num1+num2;
        break;
    case '-':
        cout <<num1-num2;
        break;
    case '*':
        cout <<num1*num2;
        break;
    case '/':
        cout <<num1/num2;
        break;
    default:
        cout << "invalid";
        break;
    }

    return 0;
}