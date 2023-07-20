#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool flag = false;
    for (int x = 0; x < (1 << n); x++)
    {
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if ((x & (1 << i)) != 0)
                ans += a[i];
            else
                ans -= a[i];
        }

        if (ans % 360 == 0)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}