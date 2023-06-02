/*
4
100 200 300 400
2

output : 700

6
4 5 3 7 2 6
3
output : 15
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

    int mx = INT_MIN;

    for (int i = 0; i < n - k + 1; i++)
    {
        int sum = 0;
        for (int j = 0; j <= k - 1; j++)
            sum += arr[i + j];
        mx = max(sum, mx);
    }
    cout << mx << "\n";

    return 0;
}