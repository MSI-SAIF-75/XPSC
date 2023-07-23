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

    if (k >= (1 - n) && k <= (n + 1))
    {
        int c = 1;
        string s = "";
        while (n--)
        {
            if ((k - c) > 0)
            {
                s += '+';
                c++;
            }
            else if ((k - c) < 0)
            {
                s += '-';
                c--;
            }
            else if ((k - c) == 0)
                s += '*';
        }

        cout << s << "\n";
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