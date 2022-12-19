#include<iostream>
using namespace std;
int addnaturalnum(int n)
{
    //int sum=(n*(n+1))/2; 
    //or
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;

    }
    return sum;
}
int main ()
{
    int h;
    cin>>h;
    cout<<addnaturalnum(h);


    return 0;
}