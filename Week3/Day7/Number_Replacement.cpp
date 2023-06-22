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
//     vector<ll> arr(n);
//     vector<char> s(n);
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     for (int i = 0; i < n; i++)
//         cin >> s[i];

//     map<int, set<char>> mp;
//     for (int i = 0; i < n; i++)
//         mp[arr[i]].insert(s[i]);
//     bool flag = 1;
//     for (auto m : mp)
//     {
//         if (m.second.size() > 1)
//         {
//             flag = 0;
//             break;
//         }
//     }
//     if (flag == 1)
//         cout << "YES"
//              << "\n";
//     else
//         cout << "NO"
//              << "\n";
// }

void doWork()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    string s;
    cin >> s;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j] && s[i] != s[j])
            {
                flag = false;
                break;
            }
        }
    }

    if (flag == true)
        cout << "YES"
             << "\n";
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