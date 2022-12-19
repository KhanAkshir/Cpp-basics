#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum;

    cout << "__________________________________________________________________________________________________________________________________________________________________________________________________________________________\n";
    for (int k = 0; k < n; k++)
    {
        
        for (int i = k; i < n; i++)
        {
            sum=0;
        
            cout << "\n";
            for (int j = k; j <= i; j++)
            {
                sum = sum + arr[j];
               
            }
             maxsum=max(maxsum,sum);
            
        }
        
        
    }
    cout<<"\n"<<maxsum;

    return 0;
}
