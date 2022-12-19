#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "enter the value of a\n";
    cin >> a;
    cout << "\n";

    
    cout << "enter the value of b\n";
    cin >> b;
    cout << "\n";
    cout<<a<<b<<"\n";


    char p;
    cout << "enter the operator\n";
    cin >> p;
    cout << "\n";

    int m;
    
    switch (p)
    
    {
    
    case '+':
    m=a+b;

        printf("%d\n",m);/*in c++ we can use any printf or cout*/
        break;

    case '-':

        cout << a - b << "\n";
        break;

    case '/':

        cout << a / b << "\n";
        break;

    case '*':

        cout << a * b << "\n";
        break;
    default:
        break;

    }

    return 0;
}