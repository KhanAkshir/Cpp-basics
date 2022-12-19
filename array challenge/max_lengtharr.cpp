#include <iostream>
using namespace std;
int main()
{
    int l = 8;
    int arr[] = {1,10,20,30,40,50,55,65};
    int pd = arr[1] - arr[0];
    int curr = 2;
    int j = 1;
    int ans = 2;
    while (j < l)
    {
        if (pd == arr[j + 1] - arr[j])
        {
            curr++;
        }
        else
        {
            pd = arr[j + 1] - arr[j];
            curr = 2;
        }
        ans = max(ans, curr);

        j++;
    }
    cout << ans;
    return 0;
}