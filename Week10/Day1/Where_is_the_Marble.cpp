#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, cap = 1;
    while (cin >> n >> q)
    {
        if (n == 0 || q == 0)
            break;
        cout << "CASE# " << cap << ":\n";
        cap++;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        while (q--)
        {
            int x;
            cin >> x;
            auto it = lower_bound(a.begin(), a.end(), x);
            int idx = it - a.begin();

            int ans;
            if (idx == n)
                ans = -1;
            else if (a[idx] != x)
                ans = -1;
            else
                ans = idx + 1;

            if (ans == -1)
                cout << x << " not found\n";
            else
                cout << x << " found at " << ans << "\n";
        }
    }
    return 0;
}