#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int t;
void doWork()
{
    ll n;
    cin >> n;
    vector<ll> arr(n + 1);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll gcd1 = 0, gcd2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            gcd1 = __gcd(gcd1, arr[i]);
        else
            gcd2 = __gcd(gcd2, arr[i]);
    }

    bool flag1 = 0, flag2 = 0;

    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] % gcd1 == 0)
        {
            flag1 = 1;
            break;
        }
    }
    for (int i = 0; i < n; i += 2)
    {
        if (arr[i] % gcd2 == 0)
        {
            flag2 = 1;
            break;
        }
    }

    if (flag1 == 1 && flag2 == 1)
        cout << 0 << "\n";
    else if (flag1 == 0)
        cout << gcd1 << "\n";
    else
        cout << gcd2 << "\n";
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