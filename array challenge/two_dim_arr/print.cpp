#include <iostream>
using namespace std;
int main()
{
    int m;
    int n;

    cin >> m >> n;
    cout << "--------------------------------------------------------------\n";
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "____________________________________________________________\n";
    for (int i = 0; i < m; i++)
    {
        cout << "\n";

        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "         ";
        }
    }
    return 0;
}