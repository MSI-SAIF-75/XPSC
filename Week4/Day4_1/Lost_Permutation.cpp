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
    ll s, m;
    cin >> s >> m;
    vector<ll> arr(s);
    ll mx = 0;
    unordered_map<ll, bool> mp;
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
        mp[arr[i]] = true;
    }

    ll sum = 0, flag = true;
    for (int i = 1; i < 100; i++)
    {
        if (sum == m)
            break;

        if (sum > m)
        {
            flag = false;
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
            flag = false;
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