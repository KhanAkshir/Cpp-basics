#include<iostream>
#include<math.h>
using namespace std;
int dectooct(int n)
{
    int sum=0;
    int i=0;
    int lastdigit;
    while(n>0)
    {
        lastdigit=n%8;
        sum=sum+(lastdigit*pow(10,i));
        i=i+1;
        n=n/8;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<dectooct(n);
    return 0;
}
