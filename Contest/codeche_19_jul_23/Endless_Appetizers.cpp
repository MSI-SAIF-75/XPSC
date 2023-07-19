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
    int x, y, r;
    cin >> x >> y >> r;

    int extra = r / 30;
    x += extra;

    if (x % y)
        cout << int(x / y) + 1 << "\n";
    else
        cout << int(x / y) << "\n";
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