#include<iostream>
using namespace std;
int main()
{
    int p;
    int y;
    int i=1;
    int j=2;
    
    p= i + j + j++ + ++j + i++ + ++i; /*1 + 2 + 2 + 4 + 1 + 3=13*/
    
    cout<<p<<"\n";
    
    cout<<i<<"\n";
    /*now i become 3 */
     y= i++ - --i + ++i + i--; /*3 - 3 + 4 + 4 =8*/

     cout<<y;
    
    return 0;
}