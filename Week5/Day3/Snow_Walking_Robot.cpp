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
    map<char, int> mp;
    for (auto i : s)
        mp[i]++;

    int minUD = min(mp['U'], mp['D']);
    int minLR = min(mp['L'], mp['R']);

    if (minUD == 0 && minLR == 0)
    {
        cout << 0 << "\n";
        cout << " "
             << "\n";
    }
    else if (minUD == 0)
    {
        cout << 2 << "\n";
        cout << "LR"
             << "\n";
    }
    else if (minLR == 0)
    {
        cout << 2 << "\n";
        cout << "UD"
             << "\n";
    }
    else
    {
        string s = "";
        for (int i = 0; i < minUD; i++)
            s += 'U';
        for (int i = 0; i < minLR; i++)
            s += 'R';
        s += string(minUD, 'D');
        s += string(minLR, 'L');

        cout << s.size() << "\n";
        cout << s << "\n";
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