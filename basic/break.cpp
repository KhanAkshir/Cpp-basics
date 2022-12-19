#include <iostream>
using namespace std;
int main()
{
    int pocketmoney = 3000;
    for (int i = 1; i <= 30; i++)
    {
        if (i % 2 == 1)
        {

            cout << "you can go out \n"
                 << i << "\n\n";
            pocketmoney = pocketmoney - 300;
            if (pocketmoney == 0)
            {
                cout << "now you are out of monr=ey so you cant go out\n";
                break;
            }
        }
        else
        {
            cout << "you cant go out\n"
                 << i << "\n\n";
        }
    }
    return 0;
}