#include<iostream>
#include<math.h>
using namespace std;
int dectobin(int n)
{
    int num;
    int i=0;
    int ans=0;


    while(n>0)
    {
        int digit=n%2;
        ans =ans+(digit * pow(10,i));
        i=i+1;
        n=n/2;


    }
    return ans;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<dectobin(n);

    return 0;
}