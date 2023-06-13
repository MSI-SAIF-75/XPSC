#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        ll l = str.size() / 2;
        ll sum1 = 0;
        for (int i = 0; i < l; i++)
            sum1 += str[i];
        ll sum2 = 0;
        for (int i = l; i < str.size(); i++)
            sum2 += str[i];

        if (sum1 == sum2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}