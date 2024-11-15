#include <iostream>
using namespace std;
int main()
{
    char TraLight;
    cout<<"What do you want:" <<endl;
      cout<<"Chose the Correct Option"<<endl;
    cout<<"R:STOP"<<endl;
   cout<<"G:GO"<<endl;
     cout<<"Y:Slow down Your Speed"<<endl;
    cin>>TraLight;
    switch (TraLight)
    {
    case 'R' :
        cout <<" ''Stop Your Vehicle'' ";
        break;
    case 'G':
        cout <<" ''Go Move Toward Your Journey'' ";
        break;
    case 'Y' :
        cout <<" ''Please Slow down Your Speed'' ";
        break;
    default:
        cout <<" ''You Enter the Invalid Option'' "  ;
        break;
    }

    return 0;
}
