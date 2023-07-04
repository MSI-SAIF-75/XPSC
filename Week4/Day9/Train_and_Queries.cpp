#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

ll t;
void doWork()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    map<ll, vector<ll>> index;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        index[arr[i]].push_back(i);
    }

    while (k--)
    {
        ll a, b;
        cin >> a >> b;

        if (index[a].empty() || index[b].empty())
        {
            cout << "NO"
                 << "\n";
            continue;
        }

        if (a == b)
        {
            cout << "YES"
                 << "\n";
            continue;
        }

        if (index[a].front() < index[b].back())
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
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