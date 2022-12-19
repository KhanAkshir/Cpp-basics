#include<iostream>
using namespace std;
void febonacci(int h)
{
    int n1=0;
    int n2=1;
     for(int i=0;i<=h;i++)
    {
        cout<<n1<<" ";
        int next=n1+n2;
        n1=n2;
        n2=next;
    }
    

}
int main()
{
    int n1=0;
    int n2=1;
    int h;
    cin>>h;
    febonacci(h);
   
    return 0;
}