#include <iostream>
using namespace std;
int main()
{
    int month;
    cout<<"Enter the Month:" <<endl;
    cin>>month;
    switch (month)
    {
    case 1:
        cout <<"''Winter''";
        break;
    case 2:
        cout <<"''Winter''";
        break;
    case 3:
        cout<<"''MARCH''";
        break;
    case 4:
        cout <<"''APRIL''";
        break;
    case 5:
        cout <<"''Summer''";
        break;
        case 6:
         cout <<"''Summer''";
        break;
        case 7:
        cout<<"''Summer''";
        break;
        case 8:
        cout<<"''Summer''";
        break;
        case 9:
        cout<<"''SEPTEMBER''";
        break;
        case 10:
        cout<<"''OCTOBER''";
        break;
        case 11:
        cout<<"''NOVEMBER''";
        break;
        case 12:
        cout<<"''Winter''";
        break;
    default:
        cout <<"You Enter the Invalid Number" ;
        break;
    }

    return 0;
}
