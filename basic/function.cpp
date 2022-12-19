#include <iostream>
using namespace std;
int add(int num, int num1)
{
    int sum = num + num1;
    return sum;
}

int main()
{
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    int d=add(n1,n2);
    cout<<d;

    return 0;
}