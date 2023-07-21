#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;

int t;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    int ans = n - 1;
    for (int i = 0; i < n - 1; i++)
    {
        // int count = 0;
        // int j = i + 1;
        // while (a[j] - a[j - 1] <= k)
        // {
        //     count++;
        //     j++
        // }
        // ans = min(ans, n - count - 1);
        // i += count;

        int count =0;
        if(a[i+1]-a[i]<=k)count++;
        else 
    }

    cout << ans << "\n";
}

int main()
{
    Faster;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}