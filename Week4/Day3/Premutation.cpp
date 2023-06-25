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

    vector<vector<ll>> arr(n, vector<ll>(n));
    vector<ll> pre(n, 0);
    vector<ll> cnt(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        pre[i] = i + 1;
        for (int j = 0; j < n - 1; j++)
        {
            cin >> arr[i][j];
            if (j == 0)
                cnt[arr[i][j]]++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] == n-1)
        {
            pre[0] = i;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] != pre[0])
        {
            for (int j = 0; j < n - 1; j++)
                pre[j + 1] = arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
        cout << pre[i] << " ";
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