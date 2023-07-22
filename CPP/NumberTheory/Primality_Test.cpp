#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;

int t;

// bool isPrime(int n)
// {
//     if (n == 1)
//         return false;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }
// void solve()
// {
//     int n;
//     cin >> n;
//     if (isPrime(n)==true)
//         cout << "yes\n";
//     else
//         cout << "no\n";
// }

void solve()
{
    int n;
    cin >> n;
    bool f = true;

    if (n <=1)
        f = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            f = false;
    }

    if (f == true)
        cout << "yes\n";
    else
        cout << "no\n";
}

int main()
{
    Faster;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}