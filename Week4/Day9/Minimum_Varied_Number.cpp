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
    ll x;
    cin >> x;
    string result;
    for (int d = 9; d > 0; d--)
    {
        if (x >= d)
        {
            result += char('0' + d);
            x -= d;
        }
    }
    sort(result.begin(), result.end());
    cout << result << "\n";
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