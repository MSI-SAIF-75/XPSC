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
    int k, n, w;
    cin >> k >> n >> w;

    int totalCost = 0;
    for (int i = 1; i <= w; i++)
        totalCost += i * k;

    int cost = totalCost - n;
    if (totalCost < n)
        cout << 0 << '\n';
    else
        cout << cost << '\n';
}

int main()
{
    Faster;
    // cin >> t;
    // while (t--)
    // {
    //     doWork();
    // }

    doWork();
    return 0;
}