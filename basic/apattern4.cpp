#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    int count =1;
    for(int i=1;i<=r ; i++)
    {
       for(int j=1;j<=r-i;j++)
        {
            cout<<" ";

        }
        
        for (int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
            
        }
         
        cout<<"\n";

    }

}