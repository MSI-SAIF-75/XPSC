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
    ll n, k;
    cin >> n >> k;
    ll sum = ((n / 2) + (n % 2)) - k;

    if (n < 2 * k)
        cout << "NO"
             << "\n";
    else if (n == 2 * k)
        cout << "YES"
             << "\n";
    else
    {
        if (sum % 2 == 0)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
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