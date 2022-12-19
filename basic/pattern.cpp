#include<iostream>
using namespace std;
int main()
{
    int r;
    int c;
    cout<<"enter row\n";
    cin>>r;
    cout<<"enter column\n";
    cin>>c;

    for(int i=1;i<=r;i++)
    {
        cout<<"\n";
        for(int j=1;j<=c;j++)
        {
            cout<<"*";
        }
    }
    return 0;
}