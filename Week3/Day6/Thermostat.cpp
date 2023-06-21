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
    ll l, r, x;
    cin >> l >> r >> x;
    ll a, b;
    cin >> a >> b;

    if (a > b)
        swap(a, b);

    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    else if (abs(a - b) >= x)
    {
        cout << 1 << endl;
        return;
    }
    else if (abs(a - l) >= x)
        cout << 2 << endl;
    else if (abs(r - b) >= x)
        cout << 2 << endl;
    else if (abs(r - a) >= x && abs(l - b) >= x)
        cout << 3 << endl;
    else
        cout << -1 << endl;
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