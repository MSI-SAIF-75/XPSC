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
    int n, a, b;
    cin >> n >> a >> b;

    if ((a <= n / 2 && b >= n / 2 + 1) || (a == n / 2 + 1 && b == n / 2))
    {
        vector<int> v;
        v.push_back(a);
        for (int i = n; i >0; i--)
            if (i != a && i != b)
                v.push_back(i);
        v.push_back(b);

        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << "\n";
    }
    else
        cout << -1 << "\n";
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