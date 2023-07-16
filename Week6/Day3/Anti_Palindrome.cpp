#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int

int t;
void doWork()
{
    int n;
    cin >> n;
    string a;
    cin >> a;

    map<char, int> mp;
    for (int i = 0; i < n; i++)
        mp[a[i]]++;

    int cntO = 0;

    for (auto it : mp)
    {
        if ((it.second & 1))
            cntO++;
    }

    if (cntO >= 2)
        cout << '0' << '\n';
    else if (cntO == 0 && mp.size() >= 1)
        cout << '1' << '\n';
    else if (cntO == 1 && mp.size() > 1)
        cout << '1' << '\n';
    else
        cout << '2' << '\n';
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