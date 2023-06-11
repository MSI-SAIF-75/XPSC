#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x = arr[i] - arr[0];
            sum += x;
        }
        cout << sum << "\n";
    }
}