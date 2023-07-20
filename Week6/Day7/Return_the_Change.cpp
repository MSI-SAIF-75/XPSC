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
    int n;
    cin >> n;

    int x = n % 10;
    int y;
    if (x == 0)
        y = n;
    else if (x >= 5)
    {
        int d = 10 - x;
        y = n + d;
    }
    else
        y = n - x;

    cout << 100 - y << "\n";
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