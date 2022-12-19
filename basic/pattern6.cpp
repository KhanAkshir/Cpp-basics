#include <iostream>
using namespace std;
int main()
    

{
    int r;
    cout<<"enter  r \n";
    cin >>r;
    int count=1;
    for(int i=1;i<=r;i++)
    {
        cout<<"\n";
        for(int j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
    }
    return 0;
}