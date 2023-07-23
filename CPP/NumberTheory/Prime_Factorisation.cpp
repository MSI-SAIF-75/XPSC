// #include <bits/stdc++.h>
// using namespace std;
// #define Faster                        \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(0);                       \
//     cout.tie(0);
// #define ll long long int
// const int MOD = 1e9 + 7;

// int t;
// void solve()
// {
//     ll n;
//     cin >> n;

//     if (n == 0)
//         return;

//     for (int i = 2; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             int cnt = 0;
//             while (n % i == 0)
//             {
//                 cnt++;
//                 n /= i;
//             }
//             cout << i << "^" << cnt << " ";
//         }
//     }
//     cout << "\n";
// }

// int main()
// {
//     Faster;
//     // cin >> t;
//     // while (t--)
//     // {
//     //     solve();
//     // }
//     solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;

int t;
void solve()
{
    int n;
    cin >> n;
    vector<int> prime;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            prime.push_back(i);
            n /= i;
        }
    }

    if (n > 1)
        prime.push_back(n);

    for (auto i : prime)
        cout << i << " ";
    cout << "\n";
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