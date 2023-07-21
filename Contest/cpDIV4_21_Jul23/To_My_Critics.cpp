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
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> ans;
    ans.push_back(a);
    ans.push_back(b);
    ans.push_back(c);

    sort(ans.begin(), ans.end(), greater<>());

    if (ans[0] + ans[1] >= 10)
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