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
    int l = 1, r = n;
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
            a[i] = l++;
        else
            a[i] = r--;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
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