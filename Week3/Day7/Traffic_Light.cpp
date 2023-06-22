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
//     ll n;
//     cin >> n;
//     char ch;
//     cin >> ch;
//     string s;
//     cin >> s;

//     if (ch == 'g')
//     {
//         cout << 0 << "\n";
//         return;
//     }

//     ll first = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == 'g')
//         {
//             first = i;
//             break;
//         }
//     }

//     ll ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//          ll flag = 0, count = 0;
//         if (s[i] == ch)
//         {

//             for (int j = i + 1; j < n; j++)
//             {
//                 count++;
//                 if (s[j] == 'g')
//                 {
//                     flag = 1;
//                     break;
//                 }
//             }
//             if (flag == 1)
//                 ans = max(ans, count);
//             else
//                 ans = max(ans, count + 1 + first);
//         }
//     }
//     cout << ans << "\n";
// }

void doWork()
{
    ll n;
    cin >> n;
    char ch;
    cin >> ch;
    vector<char> s(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> s[i];

    ll last;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == 'g')
        {
            last = n + i;
            break;
        }
    }

    ll ans = 0;
    for (int i = n; i >= 1; i--)
    {
        if (s[i] == 'g')
            last = i;
        else if (s[i] == ch)
            ans = max(ans, last - i);
    }
    cout << ans << "\n";
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