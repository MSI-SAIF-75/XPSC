#include <bits/stdc++.h>
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
using namespace std;

ll t;
// void doWork()
// {
//     ll n, q;
//     cin >> n >> q;

//     vector<ll> v(n);
//     for (ll i = 0; i < n; i++)
//         cin >> v[i];

//     for (ll i = 0; i < q; i++)
//     {
//         ll a, b;
//         ll sum = 0;
//         cin >> a >> b;
//         for (ll j = 0; j < n; j++)
//         {
//             if (a == 0 && v[j] % 2 == 0)
//             {
//                 v[j] = v[j] + b;
//                 sum += v[j];
//             }
//             else if (a == 1 && v[j] % 2 == 1)
//             {
//                 v[j] = v[j] + b;
//                 sum += v[j];
//             }
//             else
//                 sum += v[j];
//         }
//         cout << sum << "\n";
//     }
// }

void doWork()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    ll even = 0, odd = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            even++;
            sum += v[i];
        }
        else
        {
            odd++;
            sum += v[i];
        }
    }

    while (q--)
    {
        int t, x;
        cin >> t >> x;
        if (t == 0)
        {
            sum += even * x;
            if (x & 1)
            {
                odd += even;
                even = 0;
            }
        }
        else
        {
            sum += odd * x;
            if (x & 1)
            {
                even += odd;
                odd = 0;
            }
        }
        cout << sum << "\n";
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