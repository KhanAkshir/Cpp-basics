#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter the elements in array\n";
    for (int i=0;i<10;i++)
    {
    
        cin>>arr[i];

    }   
    cout<<"{";
    for(int j=9;j>=0;j--)
    {
        cout<<arr[j]<<" ";
    }
    cout<<"}";
     
    return 0;
}