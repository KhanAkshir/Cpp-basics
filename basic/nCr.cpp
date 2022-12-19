#include<iostream>
using namespace std;
int nCr(int n)
{
    for(int i=(n-1);i>=1;i--)
    {
        n=n*i;
    }
    return n;
}
int main()
{
    int n;
    int r;
    cin >>n>>r;
    cout<<"nCr is :- \n";
    int ans=nCr(n)/(nCr(r)*nCr(n-r));
    cout<<ans;
    return 0;
}