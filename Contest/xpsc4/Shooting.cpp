#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> dist;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int sot = -1;
        for (int j = 0; j < n; j++)
        {
            if (sot == -1 || a[j] > a[sot])
                sot = j;
        }

        dist.push_back(sot + 1);
        ans += i * a[sot] + 1;
        a[sot] = 0;
        
    }
    cout << ans << '\n';

    for (auto i : dist)
        cout << i << " ";
    cout << "\n";

    return 0;
}