#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //////////////////////////////////1
    int N = 10000;
    int idx[N];

    
    for (int j = 0; j < N; j++)
    {
        idx[j] = -1;
    }
    ////////////////////////////////////2
    cout<<"----------------------------------------------------------------------------------------\n";
    int minx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            
             if(minx> idx[arr[i]]);
             minx=idx[arr[i]];
            cout<<"\n"<<minx+1<<"th element is also at "<<i+1<<"th which is  "<<arr[i]<<"\n\n";
            break;
        }
        else
        {
            idx[arr[i]] = i;
        }
    }
    //////////////////////////////3
    if (minx == INT_MAX)
    {
        cout << "-1" <<endl;
    }
    else
    {
        cout << minx + 1<<"th element is repeating which is "<<arr[minx]<< endl;
    }
    return 0;
    }