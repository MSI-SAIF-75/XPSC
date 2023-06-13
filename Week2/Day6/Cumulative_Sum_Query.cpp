#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll m;
    cin >> m;
    while (m--)
    {
        ll i, j;
        cin >> i >> j;
        ll sum = 0;
        for (int x = i; x <= j; x++)
            sum += arr[x];
        cout << sum << "\n";
    }
}