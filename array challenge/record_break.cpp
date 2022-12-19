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
    int temp = 0;
    int j = 0;
    arr[n]=0;
    int no=0;
    while (j < n)
    {
        if (arr[j] > temp && arr[j] > arr[j + 1])
        {
            cout << j + 1 << "th   : it is record breaking day\n";
            no++;
            cout<<"num of record breaking day  = "<<no<<"\n";
        }
        else
        {
            cout << j + 1 << "th  normal day \n";
        }
        temp = max(temp, arr[j]);
        j++;
    }
    cout<<"\n\n\ntotal  num of record breaking day  = "<<no<<"\n";
    return 0;
}