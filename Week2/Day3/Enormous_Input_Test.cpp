#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, k;
    cin >> n >> k;
    int count = 0;
    while (n--)
    {
        ll x;
        cin >> x;
        if (x % k == 0)
            count++;
    }
    cout << count << "\n";
    return 0;
}