#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
     for (int i = 0; i < n; i++)
    {
        cout<<"\n";
        for (int j = 0; j < m; j++)
        {
            cout<< arr[i][j]<<" ";
        }
    }
    // spriral order print
    int row_start = 0, row_end = n - 1, column_start = 0, column_end = m - 1;
    cout << "\n----------------------------\n";
    while (row_start <= row_end && column_start <= column_end)
    {
        for(int col= column_start;col<=column_end;col++)
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start+=1;
         for(int row= row_start;row<=row_end;row++)
        {
            cout<<arr[row][column_end]<<" ";
        }
        column_end-=1;
        for(int col1=column_end;col1>=column_start;col1--)
        {
            cout<<arr[row_end][col1]<<" ";

        }
        row_end-=1;
        for(int row1=row_end;row1>=row_start;row1--)
        {
            cout<<arr[row1][column_start]<<" ";
        }
        column_start+=1;


    }
    return 0;
}