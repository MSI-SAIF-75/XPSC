#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        int mx = INT_MIN;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] >= i)
            {
                int x = abs(arr[i] - i);
                mx = max(mx, x);
            }
        }
        cout << mx << "\n";
    }
    return 0;
}