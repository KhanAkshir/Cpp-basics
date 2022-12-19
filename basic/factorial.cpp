#include<iostream>
using namespace std;
int  factorial(int n)
{

    for(int i=n-1;i>=1;i--)
    {
        n=n*i;
        
    }
    return n;
    
    
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}