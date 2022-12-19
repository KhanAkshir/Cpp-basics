#include<iostream>
using namespace std;
bool isprime(int j)
{
    for(int h=2;h<j;h++)
    {
        if(j%h==0)
        {
            return false;
        }
    }
    
    
        return true;
    
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=n;i<m;i++)
    {
    if(isprime(i))
    {
        cout<<i<<endl;
    }
    }


    return 0;
}