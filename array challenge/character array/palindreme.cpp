#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    cout<<arr;
    bool check = 1;
    for (int i = 0; i < n ; i++)
    {
        if (arr[i] == arr[n - i-1])
        {
            check=1;
        }
        else
        {
            check=0;
            break;
        }
    }
    if(check)
    {
        cout<<"\npalindrome";//anna ,nitin etc are palindrome;
    }
    else{
        cout<<"\nnope";
    }

    return 0;
}