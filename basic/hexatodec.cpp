#include <bits/stdc++.h>
using namespace std;
int hextodec(string n)
{
    int sum = 0;
    int X = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {

            sum = sum + X * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            sum = sum + X * (n[i] - 'A' + 10);
        }
        X = X * 16;
    }
    return sum;
}
int main()
{
    string n;
    cin >> n;
    cout << hextodec(n);
    return 0;
}