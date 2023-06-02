/*
4
100 200 300 400
2

output : 700

4
100 200 300 400
4
output : 1000
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cin >> k;

    int sum = 0, mx = INT_MIN;
    int i = 0, j = 0;
    while (j < n)
    {
        sum += arr[j];
        if (j < k - 1)
        {
            j++;
        }
        else
        {
            mx = max(sum, mx);
            sum -= arr[i];
            i++;
            j++;
        }
    }
    cout << mx << "\n";
    return 0;
}