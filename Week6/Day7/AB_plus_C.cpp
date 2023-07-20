#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int

int t;
// void doWork()
// {
//     ll n;
//     cin >> n;

//     ll count = 0;
//     ll m = n;
//     while (m != 0)
//     {
//         ll r = m % 10;
//         count++;
//         m /= 10;
//     }
//     // cout << count << "\n";
//     // cout << n << "\n";
//     if (n < 2)
//         cout << -1 << "\n";
//     else if (count < 8)
//     {
//         ll x = count;
//         ll d = x + 1;
//         ll y = (n / d);
//         ll z = n - x * y;

//         ll triplet = x * y + z;
//         if (triplet == n)
//             cout << x << " " << y << " " << z << "\n";
//     }
//     else if ((n % 8) == 0 && count >= 8)
//     {
//         ll x = count + 1;
//         ll d = x + 1;
//         ll y = (n / d);
//         ll z = n - x * y;

//         ll triplet = x * y + z;
//         if (triplet == n)
//             cout << x << " " << y << " " << z << "\n";
//     }
//     else if ((n % 8) && count >= 8)
//     {
//         ll x = count + 2;
//         ll d = x + 1;
//         ll y = (n / d);
//         ll z = n - x * y;

//         ll triplet = x * y + z;
//         if (triplet == n)
//             cout << x << " " << y << " " << z << "\n";
//     }
// }

void doWork()
{
    ll n;
    cin >> n;
    if (n == 1)
        cout << -1 << "\n";
    else
    {
        if (n <= 1e6)
            cout << 1 << " " << 1 << " " << n - 1 << "\n";
        else if (n > 1e6 && n % 1000000!=0)
            cout << 1000000 << " " << n / 1000000 << " " << n % 1000000 << "\n";
        else
            cout << 1000000 << " " << n / 1000000 - 1 << " " << 1000000 << "\n";
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

/*
999999999999999
*/