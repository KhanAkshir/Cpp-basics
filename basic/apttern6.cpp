#include <iostream>
using namespace std;
int main()
{
    int r;
    cin >> r;
    for (int i; i <= r; i++)
    {
        cout << "\n";
        for (int j = 1; j <= r - i; j++)
            cout << "  ";
        for (int j = i; j >= 1; j--)
        {
            cout << " " << j;
        }
        for (int j = 2; j <= i; j++)
        {
            cout << " " << j;
        }
    }

    for (int i = r; i >= 1; i--)
    {
        cout << "\n";
        for (int j = 1; j <= r - i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << " " << j;
        }
        for (int j = 2; j <= i; j++)
        {
            cout << " " << j;
        }
    }
    return 0;
}