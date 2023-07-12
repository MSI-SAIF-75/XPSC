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
    int x, y, z;
    cin >> x >> y >> z;

    if (x * y % z == 0)
        cout << x * y << " " << z << "\n";
    else if (x * z % y == 0)
        cout << x * z << " " << y << "\n";
    else if (y * z % x == 0)
        cout << y * z << " " << x << "\n";
    else
        cout << -1 << "\n";
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