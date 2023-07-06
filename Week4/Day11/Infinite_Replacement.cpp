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
    string t;
    cin >> s >> t;

    ll n = s.size();

    if (t == "a")
        cout << 1 << "\n";
    else if (count(t.begin(), t.end(),'a') != 0)
        cout << "-1"
             << "\n";
    else
    {
        ll ans = 1ll << n;
        cout << ans << "\n";
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