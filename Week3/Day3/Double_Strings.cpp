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
    vector<string> str(n);
    map<string, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
        mp[str[i]] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        bool flag = 0;
        for (int j = 1; j < str[i].size(); j++)
        {
            string s1 = "", s2 = "";
            for (int k = 0; k < j; k++)
                s1 += str[i][k];
            for (int k = j; k < str[i].size(); k++)
                s2 += str[i][k];

            if (mp[s1] && mp[s2])
                flag = 1;
        }
        if (flag == 1)
            cout << 1;
        else
            cout << 0;
    }
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