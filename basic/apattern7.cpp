#include <iostream>
using namespace std;
int main()
{

    int c;
    cin >> c;
    for (int i = 1; i <= 3; i++)
    {
        cout << "\n";
        for (int j = 1; j <= c; j++)
        {
            if ((i + j) % 4 == 0 || i == 2 && j % 4 == 0)
            {
                cout << j;
            }
            else{
                cout<<" ";
            }
        }
    }
    return 0;
}