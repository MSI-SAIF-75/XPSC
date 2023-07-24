#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cntE = 0, cntO = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] & 1)
            cntO++;
        else
            cntE++;
    }

    int ans = min(cntE, cntO);
    cout << ans << '\n';

    return 0;
}