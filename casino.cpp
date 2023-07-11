#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    srand(time(0));
    string name;
    double num1, num2;
    int num3, num4;
    cout<<"Enter your name\n";
    cin>>name;
    cout<<"Enter balance\n";
    cin>>num1;
    system("CLS");
    while (num1 >= 1)
    {
        cout<<"Enter amount to bet\n(To cash out press 0)\n";
        cin>>num2;
        if (num2 == 0)
            break;
        while (num2>num1*2)
        {
            cout<<"Insufficient Funds.\nEnter amount to bet\n";
            cin>>num2;
        }

        cout<<"Pick a number between 1 and 20\n";
        num3 = 1 + rand()%20;
        cin>>num4;
        if (num4 == num3)
        {
            num1 += num2;
            cout<<"Jackpot! you gained: $"<<num2*2<<"\nNew Balance: $"<<num1<<endl;
        }

        else
        {
            num1 -= num2/2;
            cout<<"Better luck next time. You lost: $"<<num2/2<<"\nNew Balance: $"<<num1<<endl;
        }
    int x;
    cout<<"Press 1 to continue\n";
    cin>>x;
    if (x == 1)
        system("CLS");
    else
        break;
    }

    cout<<"Thank you for playing. Your balance is: $"<<num1<<endl;

return 0;
}

