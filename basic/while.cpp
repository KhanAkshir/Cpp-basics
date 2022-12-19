#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number\n";
    cin>>n;
    while (n>100)
    {
        cout<<"oops enter under 100\n";
        cout<<"enter correct roll\n";

        cin>>n;
        
    
    }
    cout<<"final n\n"<<n;
    
    return 0;
}