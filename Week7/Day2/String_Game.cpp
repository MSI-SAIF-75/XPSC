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
    string s;
    cin >> s;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            count++;
    }
    int lost = n - count;
    int ans = min(count, lost);
    if ((ans & 1)==0)
        cout << "Ramos\n";
    else
        cout << "Zlatan\n";
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