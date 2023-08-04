#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> mp;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        mp[l - 1]++;
        mp[r]--;
    }

    vector<int> idx;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += mp[i];
        idx.push_back(s);
    }

    sort(a.begin(), a.end());
    sort(idx.begin(), idx.end());

    long long ans = 0;
    for (int i = 0; i < idx.size(); i++)
        ans += (idx[i] * 1ll * a[i]);

    cout << ans << "\n";

    return 0;
}