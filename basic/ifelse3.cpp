#include<iostream>
using namespace std;
int main()
{
    int e,f,g;
    cout<<"enter the value of e,f and g\n";
    cin>>e>>f>>g;
    if(e>f)
    {
        if(e>g)
        {
            cout<<"e is greatest which is \n";
            cout<<e;
        }
        else{
            cout<<"g is  greatest which is\n";
            cout<<g;
        }
        
    }
    else
    {
        if (f>g)
        {
            cout<<"f is the greatest which is \n";
            cout<<f;
        }
        else{
            cout<<"g is  greatest which is\n";
            cout<<g;
        }
    }
    return 0;
}