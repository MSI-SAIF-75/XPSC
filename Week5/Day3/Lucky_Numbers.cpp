#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int t;

int check(int x)
{
    int l = 10, r = -1;

    while (x)
    {
        l = min(l, x % 10);
        r = max(r, x % 10);
        x /= 10;
    }
    return r - l;
}
void doWork()
{
    int l, r;
    cin >> l >> r;

    int mx = -1, i = -1;
    while (l <= r)
    {
        int x = check(l);
        if (mx < x)
        {
            mx = x;
            i = l;
        }
        if (mx == 9)
            break;
        l++;
    }
    cout << i << "\n";
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