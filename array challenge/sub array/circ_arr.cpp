#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int r = 0; r < n; r++)
    {
        sum=sum+arr[r];
        arr[r] = arr[r] * -1;
    }
    arr[-1] = 0;
    int ignore = INT_MIN;
    for (int j = 0; j < n; j++)
    {
        arr[j] = arr[j] + arr[j - 1];
        if (arr[j] < 0)
        {
            arr[j] = 0;
        }
        ignore = max(ignore, arr[j]);
    }
    cout << "\n-->" << ignore;

    cout<<"\n"<<"the max sum is--> "<<sum+ignore;

    return 0;
}