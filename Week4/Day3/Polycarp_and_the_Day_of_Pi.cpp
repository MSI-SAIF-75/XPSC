#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

ll t;
void doWork()
{
    string s;
    cin >> s;
    string pi = "314159265358979323846264338327";

    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == pi[i])
            ans++;
        else
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