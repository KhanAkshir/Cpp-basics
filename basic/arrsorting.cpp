#include <iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            else
            {
                continue;
            }
        }
    }
    cout << "{";
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << ",";
    }
    cout << arr[n - 1];
    cout << "}";
}
int main()
{
    int arr[] = {1, 5, 3};
    int n = 3;
    selectionsort(arr, n);
    return 0;
}