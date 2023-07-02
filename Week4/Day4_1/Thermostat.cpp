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
    ll l, r, x;
    cin >> l >> r >> x;
    ll a, b;
    cin >> a >> b;

    if (a > b)
        swap(a, b);

    if (a == b)
        cout << 0 << "\n";
    else if (abs(a - b) >= x)
        cout << 1 << "\n";
    else if (abs(a - l) >= x)
        cout << 2 << "\n";
    else if (abs(r - b) >= x)
        cout << 2 << "\n";
    else if (abs(r - a) >= x && abs(l - b) >= x)
        cout << 3 << "\n";
    else
        cout << -1 << "\n";
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