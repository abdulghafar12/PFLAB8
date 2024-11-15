#include <iostream>
using namespace std;
int main()
{
    char Alpha;
    cout<<"Enter the Alphabet ";
    cin>>Alpha;
    switch (Alpha)
    {
    case 'a':
        cout <<" Yes a is a vowel ";
        break;
    case 'e':
        cout <<" Yes e is a vowel ";
        break;
    case 'i':
        cout <<" Yes i is a vowel ";
        break;
    case 'o':
        cout <<" Yes o is a vowel ";
        break;
        case 'u':
         cout <<" Yes u is a vowel ";
        break;
    default:
        cout << "You Enter the Consonant";
        break;
    }

    return 0;
}