#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll x, n, m;
    cin >> x >> n >> m;
    ll d = m + x;

    if (d >= n)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
    return 0;
}