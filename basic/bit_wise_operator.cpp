#include<iostream>
using namespace std;
int main()
{

    int g=1<<3;/*4*2^1*/
    cout<<g;
    int h=4>>1;/*4/2^1*/
    cout<<"\n"<<h<<"\n";

    int t= 5 & 4;/*and gate*/
    cout<<t<<"\n";
    
    int r=5 | 0;/*or gate*/
    cout<<r<<"\n";
    
    int x=1^3;/*XOR gate*/
    cout<<x<<"\n";
    
    int c=~6;/*complement*/
    cout<<c<<"\n";


    return 0;
}