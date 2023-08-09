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
    int sum = 0;

    int z = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] == 0)
            z++;
    }

    if (sum == 0)
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        if (sum > 0)
        {
            sort(a.begin(), a.end(), greater<>());
            for (int i = 0; i < n; i++)
            {
                if (a[i] != 0)
                    cout << a[i] << " ";
            }
        }
        else
        {
            sort(a.begin(), a.end());
            for (int i = 0; i < n; i++)
            {
                if (a[i] != 0)
                    cout << a[i] << " ";
            }
        }

        for (int i = 0; i < z; i++)
            cout << 0 << " ";
        cout << "\n";
    }
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