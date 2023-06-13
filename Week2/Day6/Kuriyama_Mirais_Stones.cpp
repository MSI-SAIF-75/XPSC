#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5 + 5;
ll arr1[N], arr2[N];

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr1[i] += arr1[i - 1] + arr[i];
    }

    sort(arr + 1, arr + n + 1);
    for (int i = 1; i <= n; i++)
        arr2[i] += arr2[i - 1] + arr[i];

    ll m;
    cin >> m;
    while (m--)
    {
        ll t, l, r;
        cin >> t >> l >> r;

        if (t == 1)
            cout << arr1[r] - arr1[l - 1] << "\n";
        else
            cout << arr2[r] - arr2[l - 1] << "\n";
    }

    return 0;
}
