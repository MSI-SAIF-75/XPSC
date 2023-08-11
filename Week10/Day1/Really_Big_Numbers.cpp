#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int sumOfDigit(ll n)
{
    ll sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    ll n, s;
    cin >> n >> s;
    ll l = 0, r = n;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (mid - sumOfDigit(mid) >= s)
        {
            ans = max(ans, n - mid + 1);
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << "\n";
    return 0;
}