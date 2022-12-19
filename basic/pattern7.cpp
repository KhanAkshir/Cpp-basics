#include <iostream>
using namespace std;
int main()
{
    int r;

    cout << "enter r\n";

    cin >> r;

    for (int i = 1; i <= r; i++)
    {
        cout << "\n";
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * r - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
    
    }
    
    for (int i = r; i >=1; i--)
    {
        cout << "\n";
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * r - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
    }
    return 0;
}