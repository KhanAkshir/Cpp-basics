#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << "\n--------------------------------------------\n";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int N = 1000;
    bool idx[N];
    for (int j = 0; j < N; j++)
    {
        idx[j] = false;
    }
    for (int h = 0; h < n; h++)
    {
        if (arr[h] >= 0)
        {
            idx[arr[h]] = true;
        }
    }
    int ans = -1;
    for (int k = 0; k < N; k++)
    {
        if (idx[k] == false)
        {
            ans = k;
            break;
        }
    }
    cout << "_________\n"
         << ans << " ";

    return 0;
}