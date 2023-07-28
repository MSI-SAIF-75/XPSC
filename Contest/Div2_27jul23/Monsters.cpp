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
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    vector<int> add;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == k)
            add.push_back(i);
    }

    for (int i = 1; i <= n; i++)
    {
        if (a[i] < k)
            add.push_back(i);
    }

    for (int i = 1; i <= n; i++)
    {
        if (a[i] != k && a[i] > k)
            add.push_back(i);
    }

    for (auto i : add)
        cout << i << " ";
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