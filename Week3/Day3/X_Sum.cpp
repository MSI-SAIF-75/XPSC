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
    ll n, m;
    cin >> n >> m;
    int arr[n+1][m+1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> arr[i][j];
    }

    ll ans = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            ll total = arr[i][j];
            for (int k = 1; k <= max(n, m); k++)
            {
                if (i + k <= n && j + k <= m)
                    total += arr[i + k][j + k];

                if (i - k >= 1 && j - k >= 1)
                    total += arr[i - k][j - k];

                if (i + k <= n && j - k >= 1)
                    total += arr[i + k][j - k];

                if (i - k >= 1 && j + k <= m)
                    total += arr[i - k][j + k];
            }
            ans = max(ans, total);
        }
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
}