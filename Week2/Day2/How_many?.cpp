#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, t;
    cin >> s >> t;
    int ans = 0;
    for (int i = 0; i < s + 1; i++)
    {
        for (int j = 0; j < s + 1; j++)
        {
            for (int k = 0; k < s + 1; k++)
            {
                if (i + j + k <= s && i * j * k <= t)
                    ans++;
                // cout << i << " " << j << " " << k << "\n";
            }
        }
    }
    cout << ans << "\n";
    return 0;
}