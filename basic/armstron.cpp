#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cube=0;
    int originaln=n;
    while(n>0)

    {
        int f= n%10;
        cube=cube+pow(f,3);
               
        n=n/10;
    }
    cout<<cube;
    if(cube==originaln)
    {
        cout<<"\nits armstrong num\n";
    }
    else{
        cout<<"\nit is not an armstrong num";

    }
    return 0;
}