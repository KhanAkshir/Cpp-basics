#include<iostream>
using namespace std;
int main()
{
    int r;
    int c;
    cout<<"enter the no. of rows\n";
    cin>>r;
    cout<<"enter the no. of column\n";
    cin>>c;
    for(int i=1;i<=r;i++)
    {
        cout<<"\n";
        for(int j=1;j<=c;j++)
        {
            if(i==1 || i==r || j==1 || j==c)
            {
                cout<<"*             ";
            }
            else{
                cout<<"              ";
            }
            
        }
    }



    return 0;
}