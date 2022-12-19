#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 0, 8, 7, 500};
    int n = 5;
    int temp = 0;
    int i=0;
    while (i <n-1)
    {
        temp = arr[i];
        i++;

        if(temp>arr[i])
        {
            arr[i]=temp;
        }
    }
    for (int p = 0; p < n; p++)
    {
        cout << arr[p] << "  ";
    }
    return 0;
}