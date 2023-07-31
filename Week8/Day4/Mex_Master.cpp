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
    int zero = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
            zero++;

        if (x >= 2)
            flag = true;
    }

    if (zero <= (n + 1) / 2)
        cout << 0 << "\n";
    else if (flag == true || zero == n)
        cout << 1 << "\n";
    else
        cout << 2 << "\n";
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