// It is a type of approach which is used to find max sum of array;
#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    arr[-1]=0;
    int temp=INT_MIN;
    for(int j=0;j<n;j++)
    {

        arr[j]=arr[j-1]+arr[j];
       // cout<<arr[j]<<" ";
        

    }
    cout<<"\n";
    for(int r=0;r<n;r++)
    {
        cout<<"\n\n";
        int sum=0; 
        for(int f=0;f<r;f++)
        {
            sum=arr[r]-arr[f-1];
            //cout<<sum<<"  ";
            temp=max(temp,sum);

        }
    }

    cout<<"\nMAX SUM IS:--   "<<temp;
    cout<<"\nMASHAALLAH";

    return 0;
}