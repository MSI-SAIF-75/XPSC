#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }
    int ans = 0;
    int sum = 0;
    for (auto [Arive, Live] : mp)
    {
        sum += Live;
        // cout << Live << " " << sum << " ";
        // cout<<"\n";
        ans = max(ans, sum);
        // cout<<ans<<" ";
    }

    cout << ans << "\n";
    return 0;
}