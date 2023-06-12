#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int l = s.size() / 2;
        int sum1 = 0;
        for (int i = 0; i < l; i++)
            sum1 += s[i];
        int sum2 = 0;
        for (int j = l; j < s.size(); j++)
            sum2 += s[j];

        if (sum1 == sum2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}