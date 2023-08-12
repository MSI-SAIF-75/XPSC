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
    sort(a.begin(), a.end());
    vector<int> ans;

    deque<int> dq;
    for (int i = 0; i < n; i++)
        dq.push_back(a[i]);

    while (!dq.empty())
    {
        if (dq.size() > 0)
        {
            ans.push_back(dq.back());
            dq.pop_back();
        }
        if (dq.size() > 0)
        {
            ans.push_back(dq.front());
            dq.pop_front();
        }
    }
    ans.push_back(ans[0]);
    for (int i = 1; i < ans.size() - 1; i++)
    {
        if ((ans[i - 1] > ans[i] && ans[i] < ans[i + 1]) || (ans[i - 1] < ans[i] && ans[i] > ans[i + 1]))
            continue;
        else
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
    for (int i = 0; i < ans.size() - 1; i++)
        cout << ans[i] << " ";
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