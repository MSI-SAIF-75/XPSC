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
    ll n;
    cin >> n;
    ll h1, h2, h3;
    for (int i = 1; i <= n; i++)
    {
        h2 = i;
        ll rem = n - h2;

        if (rem % 2 == 0)
            h1 = 1 + (rem / 2);
        else
            h1 = (rem + 1) / 2;

        h3 = n - h2 - h1;

        if (h1 > 0 && h2 > 0 && h3 > 0 && h2 > h1 && h1 > h3)
            break;
    }

    cout << h1 << " " << h2 << " " << h3 << "\n";
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