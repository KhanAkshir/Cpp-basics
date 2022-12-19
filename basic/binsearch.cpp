#include<iostream>
using namespace std;
int binsearch(int arr[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=n)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            cout<<key<<"   "; 
            return mid;
            
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }

    }
    return 0;

}
int main()
{
    int n;
    cout<<"enter the no. of elements for array\n";
    cin>>n;
    int arr[n];
    cout<<"please enter the number in shorted order \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the element you want to search\n";
    cin>>key;
    cout<<binsearch(arr,n,key);
    return 0;


}
//time complexity of bin search is  O(log n) ...