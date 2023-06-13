#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, k, x;
    cin >> n >> k;
    while (n--)
    {
        cin >> x;
        if (x == k)
            continue;
        else
            cout << x << " ";
    }
    return 0;
}