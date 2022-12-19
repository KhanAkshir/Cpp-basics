//littile complicated  
#include<iostream>
using namespace std;
int main()
{
    int r;
    int c;
    cin>>r;
    cin>>c;
    for(int i=1;i<=r ; i++)
    {
       for(int j=1;j<=r-i;j++)
        {
            cout<<" ";

        }
        for (int j=1;j<=c;j++)
        {
            cout<<" "<<"*";
        }
         
        cout<<"\n";

    }

}