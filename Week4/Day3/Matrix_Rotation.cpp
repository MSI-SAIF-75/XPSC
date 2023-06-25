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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a < b && c < d && a < c && b < d)
        cout << "YES"
             << "\n";
    else if (a < b && c < d && a > c && b > d)
        cout << "YES"
             << "\n";
    else if (a > b && c > d && a < c && b < d)
        cout << "YES"
             << "\n";
    else if (a > b && c > d && a > c && b > d)
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