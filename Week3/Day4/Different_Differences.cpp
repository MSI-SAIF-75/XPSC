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
    ll k, n;
    cin >> k >> n;

    vector<ll> ans(k);
    ans[0] = 1;
    for (int i = 1; i < k; i++)
    {
        if (ans[i - 1] <= n - k + 1)
            ans[i] = ans[i - 1] + i;
        else
            ans[i] = ans[i - 1] + 1;
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << "\n";
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