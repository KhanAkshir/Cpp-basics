#include <iostream>
using namespace std;
int main()
{
    int roll;
    int i = 2;
    cout<<"enter roll\n";
    cin >> roll;
    while (roll > 100 && i >= 1)
    {
        cout << "please enter the roll you have only \t"<<i<<"\t attemps left\n";
        i=i-1;
        cin >> roll;
    }
    if(roll>100)
    {
        cout<<"oops you crossed your wrong limits please try again later\n ";
    }
    else{
        cout<< "your roll is \n"<<roll;
    }

    return 0;
}