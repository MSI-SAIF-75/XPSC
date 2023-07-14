/*

kCn = k!/(k-n)!

*/

#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int mode = 1e9 + 7;
int t;
void doWork()
{
    int n, k;
    cin >> n >> k;
    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = (ans * k) % mode;
        if (k > 1)
            k--;
    }
    cout << ans << "\n";
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