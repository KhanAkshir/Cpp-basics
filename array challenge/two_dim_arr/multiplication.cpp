#include <iostream>
using namespace std;
int main()
{
    int m, n, l;
    cin >> m >> n >> l;
    int arr[m][n];
    int arr1[n][l];
    int arresult[m][l];

    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\n2nd\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "\n\no1\n";
    for (int i = 0; i < m; i++)
    {
        cout << "\n";
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "    ";
        }
    }

    cout << "\n\n02\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n";
        for (int j = 0; j < l; j++)
        {
            cout << arr1[i][j] << "    ";
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout << "\n";
        for (int j = 0; j < l; j++)
        {
            arresult[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < l; j++)
        {
            for (int k = 0; k < n; k++)
            {
                arresult[i][j] += arr[i][k] * arr1[k][j];
            }
        }
    }

    cout << "\nthe result of ptuduct is \n";
    for (int i = 0; i < m; i++)
    {cout<<"\n";
        for (int j = 0; j < l; j++)
        {
            cout << arresult[i][j] << "    ";
        }
    }

    return 0;
}