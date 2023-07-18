#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int

int t;
void doWork()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int bc = 0, ab = 0, ac = 0;

    bc = abs(x3 - x2) + abs(y3 - y2) - 1 + 2;
    ac = abs(x3 - x1) + abs(y3 - y1) - 1 + 2;
    ab = abs(x2 - x1) + abs(y2 - y1) - 1 + 2;

    if (bc == ab + ac - 1)
        cout << 1 << "\n";
    else
    {
        int r = ab + ac - bc;
        int p = (r - 1) / 2;
        cout << p + 1 << "\n";
    }
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