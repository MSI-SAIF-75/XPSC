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
        int freq[26] = {0};
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;

            int idx = (int)(x - 'A');
            if (freq[idx] == 0)
            {
                ans += 2;
                freq[idx]++;
            }
            else
                ans++;
        }
        cout << ans << "\n";
    }
}