#include <iostream>
#include<cmath>
using namespace std;
bool ap(int a, int b, int c)
{
    int h = max(a, max(b, c));
    int p;
    int ba;
    if (h == a)
    {
        p = b;
        ba = c;
    }
    else if (h == b)
    {
        p = a;
        ba = c;
    }
    else
    {
        p=a;
        ba=b;
    }
    if (h * h == ((ba * ba) + (p * p)))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (ap(a, b, c))
    {
        cout << "these are pythagorean triples";
    }
    else
    {
        cout << "it is not pythagorean triples ";
    }
    return 0;
}