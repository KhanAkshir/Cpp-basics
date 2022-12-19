#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number\n";
    cin>>n;
    int i;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<n<<" is non prime\n\n";
            break;
        }
    }
       if(i==n){
            cout<<n<<" is prime number\n\n";
       }
        return 0;

    
}