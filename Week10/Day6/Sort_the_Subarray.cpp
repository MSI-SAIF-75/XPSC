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
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int l = 0, r = n - 1;
    while (a[l] == b[l])
        l++;
    while (a[r] == b[r])
        r--;

    while (l > 0 && b[l] >= b[l - 1])
        l--;
    while (r < n - 1 && b[r] <= b[r + 1])
        r++;

    cout << l + 1 << " " << r + 1 << "\n";
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