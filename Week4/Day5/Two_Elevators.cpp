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
    ll a, b, c;
    cin >> a >> b >> c;
    ll d1 = abs(a - 1);
    ll d2 = abs(b - c) + abs(c - 1);
    if (d1 < d2)
        cout << 1 << "\n";
    else if (d1 > d2)
        cout << 2 << "\n";
    else
        cout << 3 << "\n";
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