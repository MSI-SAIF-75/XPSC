#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        int ans = mp.size();
        int x = n - ans;
        if (x % 2 == 1)
            ans--;
        cout << ans << "\n";
    }
    return 0;
}