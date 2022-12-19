#include<iostream>
using namespace std;
int main()
{
    int i=9;
    int g=9;
    int t=--i;
    cout<<t<<"\n"<<i<<"\n";
    int a=i++;/*here it works after applying */
    cout<<a<<"\n"<<i;
}