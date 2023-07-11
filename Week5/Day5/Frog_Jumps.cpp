#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int t;
void doWork()
{
    string s;
    cin >> s;

    vector<ll> pos;
    pos.push_back(0);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'R')
            pos.push_back(i + 1);
    }
    pos.push_back(s.size() + 1);
    ll ans = 0;
    for (int i = 0; i < pos.size() - 1; i++)
        ans = max(ans, pos[i + 1] - pos[i]);

    cout << ans << "\n";
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