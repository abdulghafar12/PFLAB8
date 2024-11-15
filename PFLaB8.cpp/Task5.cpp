#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"What do you want:" <<endl;
      cout<<"Chose the Correct Option"<<endl;
    cout<<"1.DEPOSIT"<<endl;
   cout<<"2.Withradrawel"<<endl;
     cout<<"3.Check Balance"<<endl;
       cout<<"4.Exit"<<endl;
    cin>>num;
    switch (num)
    {
    case 1 :
        cout <<" Deposit a money ";
        break;
    case 2:
        cout <<"Withdrawel a money  ";
        break;
    case 3 :
        cout <<" Check Your Balance ";
        break;
    case 4 :
        cout <<" Exit a Card from a ATM ";
        break;
    default:
        cout <<"You Enter the Invalid Option "  ;
        break;
    }

    return 0;
}
