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
    ll x;
    cin >> x;
    if (x <= 3)
        cout << "BRONZE"
             << "\n";
    else if (3 < x && x <= 6)
        cout << "SILVER"
             << "\n";
    else
        cout << "GOLD"
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