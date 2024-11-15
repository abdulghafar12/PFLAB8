#include <iostream>
using namespace std;
int main()
{
    int DAY;
    cout << "Enter the day ( 1-7 ) :";
    cin >> DAY;

    switch (DAY)
    {
    case 1:
        cout << " MONDAY ";
        break;
    case 2:
        cout << " TUESDAY";
        break;
    case 3:
        cout << "WEDNESDAY";
        break;
    case 4:
        cout << "THURSDAY";
        break;
    case 5:
        cout << "FRIDAY";
        break;
    case 6:
        cout << "SATURDAY";
        break;
    case 7:
        cout << "SUNDAY";
        break;
    default:
        cout << "invalid";
        break;
    }

    return 0;
}