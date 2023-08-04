#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, long long> mp;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }
    int sum = 0;
    bool f = true;
    for (auto t : mp)
    {
        sum += t.second;
        if (sum > 2)
        {
            f = false;
            break;
        }
    }

    if (f == true)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}