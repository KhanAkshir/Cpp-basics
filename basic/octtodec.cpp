#include <iostream>
using namespace std;
int octtodec(int n)
{

    int last;
    int sum = 0;
    int i=1;
    while (n > 0)
    {
        last = n % 10;
        /// 3
        sum = sum + (last * i);
        i=i*8;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<octtodec(n);


    return 0;
}