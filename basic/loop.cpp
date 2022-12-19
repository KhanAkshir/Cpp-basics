#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the max num\n";
    cin>>n;
    int sum=0;
    for (int i = 0; i <=n; i++)
    {
        sum=sum+i;
    
        cout<<sum<<"\n";
    }
    cout<<"the final sum is\n"<<sum;
    
    return 0;
}