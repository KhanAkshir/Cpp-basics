#include <iostream>
using namespace std;
int main()
{
    int total = 100;
    int arr[] = {1, 2, 3, 7, 5};
    int n = 5;
    
    int i=0;
    int j=0;
    int sum =0;
    int st=-1;
    int en=-1;
    while (j<n && sum+arr[j]<=total)
    {
        sum=sum+arr[j];
        j++;
    }
    if(sum==total)
    {
        cout<<i+1<<" to "<<j;
        return 0;
    }
    while (j<n)
    {
        sum += arr[j];
        while (sum>total)
        {
            sum=sum-arr[i];
            i++;
        }
    if(sum==total)
    {
        st=i;
        en=j;
        break;    
    }
    
    j++;
    }
    cout<<st<<" to "<<en;
    return 0;
}