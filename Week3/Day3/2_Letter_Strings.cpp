#include <bits/stdc++.h>
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
using namespace std;

ll t;
void doWork()
{
    ll n;
    cin >> n;
    vector<string> s(n);

    map<char, ll> first_column;
    map<char, ll> second_column;
    map<string, ll> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        first_column[s[i][0]]++;
        second_column[s[i][1]]++;
        mp[s[i]]++;
    }
    ll count = 0;
    ll ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ll column1 = first_column[s[i][0]] - mp[s[i]];
        // cout<<count1<<" ";
        ll column2 = second_column[s[i][1]] - mp[s[i]];
        // cout<<count2<<"\n";

        int x = max(ans, column1);
        count += x;

        x = max(ans, column2);
        count += x;

        if (first_column[s[i][0]] > 0)
            first_column[s[i][0]]--;
        if (second_column[s[i][1]] > 0)
            second_column[s[i][1]]--;

        if (mp[s[i]] > 0)
            mp[s[i]]--;
    }

    cout << count << "\n";
}

// void doWork()
// {
//     ll n;
//     cin >> n;
//     map<string, ll> mp;
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         cin >> s;
//         string temp = s;
//         for (char ch = 'a'; ch <= 'z'; ch++)
//         {
//             if (ch != s[0])
//             {
//                 temp[0] = ch;
//                 count += mp[temp];
//             }
//         }
//         temp = s;
//         for (char ch = 'a'; ch <= 'z'; ch++)
//         {
//             if (ch != s[1])
//             {
//                 temp[1] = ch;
//                 count += mp[temp];
//             }
//         }
//         mp[s]++;
//     }
//     cout << count << "\n";
// }

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