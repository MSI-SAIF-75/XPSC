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
    ll n;
    cin >> n;
    if (n == 3)
    {
        cout << -1 << "\n";
        return;
    }

    cout << n << " " << n - 1 << " ";
    for (int i = 1; i < n - 1; i++)
        cout << i << " ";
    cout << "\n";
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