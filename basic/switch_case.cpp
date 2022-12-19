#include<iostream>
using namespace std;
int main()
{
    int h;
    cout<<"enter the num";
    cin>>h;
    switch (h)
    {
    case 1:
        cout<<"helllo you opt 1\n";
        break;
    case 2:
    cout<<"you opt 2\n";
    break;
    case 3:
    cout<<"you opt 3\n";
    break;
    case 4:
    cout<<"you opt 4\n";
    cin>>h;
    break;


    default:
        break;
    }
    return 0;
}