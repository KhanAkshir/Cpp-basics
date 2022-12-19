#include <iostream>
using namespace std;
int main()
{
    int n = 8;
    int arr[] = {8, 9, 17, 13, 4, 1, 42, 1};
    int diff = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] - arr[i + 1] > diff)
        {
            diff = arr[i] - arr[i + 1];
        }
    }
    cout << diff;
    return 0;
}