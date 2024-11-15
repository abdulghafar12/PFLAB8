#include <iostream>
using namespace std;
int main()
{
    char Grade;
    cout<<"Enter the Grade Like ( A,B,C,D,F):" <<endl;
    cin>>Grade;
    switch (Grade)
    {
    case 'A':
        cout <<" Excelent ";
        break;
    case 'B':
        cout <<" Good ";
        break;
    case 'C':
        cout <<" Average ";
        break;
    case 'D':
        cout <<" Only Pass ";
        break;
        case 'F':
         cout <<" Oh ! You are Fail ";
        break;
    default:
        cout <<"You Enter the Invalid Grade"  ;
        break;
    }

    return 0;
}
