#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int j;
    for (int i = a; i <= b; i++)
    {
        for (j = 2; j < b; j++)

        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            cout << i << "\n\n";
        }
    }
    return 0;
}