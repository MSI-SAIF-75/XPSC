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
        for (int i = 1; i < n; i++)
        {
            arr[i] = arr[i] - arr[0];
            sum +=arr[i];
        }
        cout << sum << "\n";
    }
    return 0;
}