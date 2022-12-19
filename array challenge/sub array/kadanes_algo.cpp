#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    int temp=INT_MIN;
    for(int j=0;j<n;j++)
    {
       sum+=arr[j];
       temp=max(temp,sum);
       if(sum<0)
       {
           sum=0;
       } 
       
    }
    cout<<"\n\n=======  "<<temp;

    return 0;
}