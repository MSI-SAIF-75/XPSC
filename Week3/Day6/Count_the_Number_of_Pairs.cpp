#include <bits/stdc++.h>
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
using namespace std;

ll t;
void doWork()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll freq_a[26] = {0};
    ll freq_A[26] = {0};
    for (int i = 0; i < n; i++)
    {
        if ('a' <= s[i] && s[i] <= 'z')
            freq_a[s[i] - 'a']++;
        else
            freq_A[s[i] - 'A']++;
    }

    ll ans = 0;
    for (int i = 0; i < 26; i++)
    {
        ans += min(freq_a[i], freq_A[i]);
        if (k > 0)
        {
            ll di = abs(freq_a[i] - freq_A[i]) / 2;
            ans += min(di, k);
            k -= di;
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