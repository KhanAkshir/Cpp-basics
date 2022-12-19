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
    int ans=90;
    int j;
    int k;
    for( j=0;j<n-1;j++)
    {
        for( k=j+1;k<n;k++)
        {
            int sum=0;
            sum=arr[j]+arr[k];
            if(sum==ans)
            {
                cout<<"yesss--got it "<<j <<" and "<<k<<"\n";
                break;
            }
        }
        

        
    }
    if(k==n)
    {
        cout<<"oops not found";
    }
    
    return 0;
}