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
    cin >> s;
    map<string, ll> mp;
    for (int i = 1; i < n; i++)
    {
        string sTem = "";
        sTem += s[i - 1];
        sTem += s[i];
        mp[sTem]++;
    }
    cout << mp.size() << "\n";
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