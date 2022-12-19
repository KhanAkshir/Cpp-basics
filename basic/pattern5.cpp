#include<iostream>
using namespace std;
int main()
{
    int f;
    cout<<"enter the value of f\n";
    cin>>f;
    for(int i=1;i<=f;i++)
    {
        cout<<"\n";
        for(int j=1;j<=f-i;j++)
        {
            cout<<" ";
                    }
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}