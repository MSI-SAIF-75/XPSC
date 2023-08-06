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

    int cnt = 0;
    int state = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1] && state != 1)
        {
            cnt++;
            state = 1;
        }
        else if (a[i] > a[i + 1] && state != -1)
        {
            cnt++;
            state = -1;
        }
    }

    cout << cnt + 1 << "\n";
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

