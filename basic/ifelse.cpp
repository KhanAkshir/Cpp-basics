#include<iostream>
using namespace std;
int main()
{
    int savings;
    cout<<"enter savings\n";
    cin>>savings;

    if(savings<5000)
    {
        cout<<"I will purchase it next month \n";
    }
    else if(savings<7000  and savings>5000)
    {
        cout<<"I need little more to get it"<<endl;
    }
    else
    {
        cout<<"lets get it";
    }
    return 0;
}