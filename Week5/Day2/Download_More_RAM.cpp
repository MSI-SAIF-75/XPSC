#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int t;
void doWork()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first;
    for (int i = 0; i < n; i++)
        cin >> v[i].second;

    sort(v.begin(), v.end());
    int ans = k;
    for (int i = 0; i < n; i++)
    {
        if (ans >= v[i].first)
            ans += v[i].second;
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