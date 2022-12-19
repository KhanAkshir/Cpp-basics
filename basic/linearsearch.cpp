#include<iostream>
using namespace std;
void linearsearch(int arr[],int n,int key)
{

    cout<<"enter the element you want to search\n";
    cin>>key;
    int j;
    for( j=0;j<n;j++)
    {
        if(arr[j]==key)
        {
            cout<<j+1<<"th element is "<<arr[j];
        }
        

    }
    cout<<"not found";
    
}
int main()
{
    int n;
    cout<<"enter the no. of elements in arr\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array\n";
    
    
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<".\t";
        cin>>arr[i];
    }
    int key;
    linearsearch(arr,n,key);

   
    return 0;
}
//time complexity of linear search is O(n)...