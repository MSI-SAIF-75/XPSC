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
    string s;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }

    reverse(v.begin(), v.end());

    unordered_map<string, ll> mp;
    string ans = "";
    for (int i = 0; i < v.size(); i++)
    {
        string f = v[i];
        if (mp.find(f) == mp.end())
        {
            ans += f[f.size() - 2];
            ans += f[f.size() - 1];
            mp[f]++;
        }
        else
            continue;
    }
    cout << ans << "\n";
}

int main()
{
    Faster;
    // cin >> t;
    // while (t--)
    // {

    // }
    doWork();
    return 0;
}