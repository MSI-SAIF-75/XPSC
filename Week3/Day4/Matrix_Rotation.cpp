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
    ll x, y, u, v;
    cin >> x >> y >> u >> v;

    if (x < y && u < v && x < u && y < v)
        cout << "YES"
             << "\n";
    else if (x > y && u > v && x > u && y > v)
        cout << "YES"
             << "\n";
    else if (x < y && u < v && x > u && y > v)
        cout << "YES"
             << "\n";
    else if (x > y && u > v && x < u && y < v)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
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