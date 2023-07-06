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
    string s;
    cin >> s;
    int p;
    cin >> p;

    string w = s;
    int cost = 0;

    sort(w.rbegin(), w.rend());

    for (int i = 0; i < s.length(); i++)
        cost += w[i] - 'a' + 1;

    map<char, int> mp;
    for (int i = 0; i < w.length(); i++)
    {
        if (cost > p)
        {
            mp[w[i]]++;
            cost -= w[i] - 'a' + 1;
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (mp[s[i]] > 0)
        {
            mp[s[i]]--;
            continue;
        }
        cout << s[i];
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