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
        for (int j = 1; j <= r; j++)
        {
            if (j <= r - i)
            {
                cout << "  ";
            }

            else
            {
                cout << " *";
            }
        }
    }
    return 0;
}