#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int t;
vector<int> pairs[1005];

void doWork()
{
    int n;
    cin >> n;
    vector<int> a[1005];

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a[x].push_back(i);
    }

    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (__gcd(i, j) == 1)
                pairs[i].push_back(j);
        }
    }
    int ans = -1;
    for (int i = 1; i <= 1000; i++)
    {
        for (auto j : pairs[i])
        {
            if (!a[i].empty() && !a[j].empty())
                ans = max(ans, a[i].back() + a[j].back());
        }
    }
    cout << ans << "\n";
}

int main()
{
    Faster;
    cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}