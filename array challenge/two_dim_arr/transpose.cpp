#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    
    int arr[n][m];
    int narr[m][n];
    for(int i =0;i<n;i++)
    {
        cout<<"\n";
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"\ngiven matrix is\n";
    
    for(int i =0;i<n;i++)
    {
        cout<<"\n";
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<"   ";
        }
    }

    for(int i =0;i<m;i++)
    {
        cout<<"\n";
        for(int j=0;j<n;j++)
        {
            narr[i][j]=0;
        }
    }

    cout<<"\ntranspose\n\n";
    
    for(int i =0;i<m;i++)
    {
        cout<<"\n";
        for(int j=0;j<n;j++)
        {
            narr[i][j]=arr[j][i];
            cout<<narr[i][j]<<"   ";
        }
    }
    return 0;
}