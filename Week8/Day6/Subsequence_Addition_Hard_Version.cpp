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

    sort(a.begin(), a.end());
    if (a[0] != 1)
    {
        cout << "NO\n";
        return;
    }

   ll sum = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] <= sum)
            sum += a[i];
        else
        {
            sum = 0;
            break;
        }
    }

    if (sum != 0)
        cout << "YES\n";
    else
        cout << "NO\n";
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