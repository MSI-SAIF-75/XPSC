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
    map<string, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        mp[s]++;
    }
    ll mx = INT_MIN;
    // for(auto x : mp)cout<<x.first<<" "<<x.second<<"\n";
    // mx = max(mx, {mp["A"] + mp["AB"]});
    // mx = max(mx, {mp["B"] + mp["AB"]});
    mx = max(mx, {mp["A"] + mp["AB"] + mp["O"]});
    mx = max(mx, {mp["B"] + mp["AB"] + mp["O"]});

    cout << mx << "\n";
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

/*
5
AB A A AB A

*/