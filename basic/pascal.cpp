#include <iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    for (int h = 2; h <= n; h++)
    {
        f = f * h;
    }
    return f;
}

int main()

{
    int r;
    cin >> r;
    for (int i = 0; i <= r; i++)
    {
        for(int j=0;j<=r-i;j++)

        {
            cout<<" ";
        }

        
        for (int j = 0; j <= i; j++)
        {

            cout << fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }

    return 0;
}