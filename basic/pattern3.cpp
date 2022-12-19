#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"enter the no. of row\n";
    cin>>r;
    for(int i=r;i>=1;i--)
    //for(int i=1;i<=r;i++) //reverse
    {
        cout<<"\n";
        for(int j=1;j<=i;j++) 
        {
            cout<<"* ";
        }
    }
    return 0;
}