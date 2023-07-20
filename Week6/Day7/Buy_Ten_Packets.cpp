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
    int x, y;
    cin >> x >> y;

    if (x < y)
    {
        y = y * 2;
        x = x * 1;
    }
    else
    {
        x = x * 2;
        y = y * 1;
    }
    cout << x + y << "\n";
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