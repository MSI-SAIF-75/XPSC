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
    vector<string> vs;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vs.push_back(s);
    }
    reverse(vs.begin(), vs.end());
    map<string, ll> mp;
    string ans = "";
    for (auto str : vs)
    {
        if (mp.find(str) == mp.end())
        {
            ans += str[str.size() - 2];
            ans += str[str.size() - 1];
            mp[str]++;
        }
    }
    cout << ans;
}

int main()
{
    Faster;
    // cin >> t;
    // while (t--)
    // {
    //     doWork();
    // }
    doWork();
    return 0;
}