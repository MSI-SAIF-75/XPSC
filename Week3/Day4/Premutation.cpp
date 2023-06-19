#include <bits/stdc++.h>
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
using namespace std;

ll t;
void doWork()
{
    ll n;
    cin >> n;
    ll arr[n + 1][n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
            cin >> arr[i][j];
    }

    map<ll, ll> mp;
    map<ll, ll> count;
    for (int i = 1; i <= n; i++)
    {
        mp[arr[i][n - 1]] = i;
        count[arr[i][n - 1]]++;
    }

    ll idx = 0, value;

    for (auto i : count)
    {
        if (i.second == 1)
            idx = i.first;
        else
            value = i.first;
    }

    for (int i = 1; i < n; i++)
        cout << arr[mp[idx]][i] << " ";

    cout << value << "\n";
}

int main()
{
    Faster;
    cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}