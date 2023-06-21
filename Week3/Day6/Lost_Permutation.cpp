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
    ll m, s;
    cin >> m >> s;
    vector<ll> arr(m);
    ll mx = 0;
    unordered_map<ll, bool> mp;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
        mp[arr[i]] = true;
    }

    ll sum = 0;
    ll flag = 1;
    for (int i = 1; i < 100; i++)
    {
        if (sum == s)
            break;

        if (sum > s)
        {
            flag = 0;
            break;
        }

        if (mp[i] == true)
            continue;
        mp[i] = true;
        sum += i;
    }

    for (int i = 1; i <= mx; i++)
    {
        if (mp[i] == false)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
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