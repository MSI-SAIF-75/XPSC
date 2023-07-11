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
    ll n, k;
    cin >> n >> k;

    int nOdd = n - (k - 1);
    int nEven = n - 2 * (k - 1);
    if (n < k)
        cout << "NO"
             << "\n";
    else if (nOdd > 0 && nOdd % 2 == 1)
    {
        cout << "YES"
             << "\n";
        for (int i = 0; i < k - 1; i++)
            cout << "1 ";
        cout << nOdd << "\n";
    }
    else if (nEven > 0 && nEven % 2 == 0)
    {
        cout << "YES"
             << "\n";
        for (int i = 0; i < k - 1; i++)
            cout << "2 ";
        cout << nEven << "\n";
    }
    else
        cout << "NO"
             << "\n";
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