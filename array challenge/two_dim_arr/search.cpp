#include <iostream>
using namespace std;
const int  n=2;
const int m=2;
int  search( int arr[m][n], int k)
{
    int i;
    for ( i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == k)
            {
                cout << "found  " << i+1 << "  " << j+1<<"\n";
                return true;
            }
        }
        
    }
    return false;
    
}
int main()
{
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cin >> arr[i][j];
        }
    }
     for (int i = 0; i < m; i++)
    {
        cout<<"\n";
        for (int j = 0; j < n; j++)
        {

            cout<< arr[i][j]<<"   ";
        }
    }
    cout<<"\n------------------------------------------------------\n";
    int search_element;
    cout<<"enter the element you want to search ";
    cin>>search_element; 
   cout<< search(arr,search_element);

    return 0;
}