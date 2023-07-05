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
    string s;
    cin >> s;

    int n = s.size();
    int lastZero = n - 1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
            lastZero = i;
    }

    int ans = 0;
    for (int i = lastZero; i >= 0; i--)
    {
        ans++;
        if (s[i] == '1')
            break;
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