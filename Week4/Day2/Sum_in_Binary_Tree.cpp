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
    ll sum = 0;
    while (n != 0)
    {
        sum += n;
        n /= 2;
    }
    cout << sum << "\n";
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