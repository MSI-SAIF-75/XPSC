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
    string s;
    cin >> s;

    int count = 0, b = 0, w = 0;
    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        count++;
        if (s[i] == 'W')
            w++;
        if (count >= k)
        {
            if (s[i - k] == 'W')
                w--;
            ans = min(ans, w);
            count--;
        }
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