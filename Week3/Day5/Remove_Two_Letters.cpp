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
    ll n;
    cin >> n;
    string s;
    cin >> s;

    string ss = "";
    for (int i = 2; i < n; i++)
        ss.push_back(s[i]);

    int i = 0, j = 0;
    int ans = 1;
    while (j < n - 2)
    {
        if (s[i] != ss[j])
            ans++;
        i++;
        j++;
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