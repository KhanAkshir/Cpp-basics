#include <iostream>
#include <cmath>
using namespace std;
int bintodec(int n)
{
    int last;
    int sum = 0;
    int i = 0;
    int base=1;
    while (n > 0)
    {
        
        last = n % 10;
        sum = sum + (base*last);
        cout << sum << "\n";
        base = base*2;
        n = n / 10;
        
        
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout<<bintodec(n);
    

    return 0;
}