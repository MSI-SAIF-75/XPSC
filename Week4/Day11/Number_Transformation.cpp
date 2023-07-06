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
    ll x, y;
    cin >> x >> y;
    ll div = y / x;
    if (y % x != 0)
        cout << 0 << " " << 0 << "\n";
    else
        cout << 1 << " " << div << "\n";
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