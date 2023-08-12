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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int i = 0, j = 1;
    int ans = 0;
    while (j < n)
    {
        if (a[i] == (a[j] + 1))
        {
            ans++;
            i = j + 1;
            j = i + 1;
        }
        else
            j++;

        if (j == n)
        {
            i++;
            j = i + 1;
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
        solve();
    }
    return 0;
}