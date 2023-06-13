#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        ll sum = 0;
        for (int i = 1; i <= n; i++)
            sum += arr[i]+1;

        if ((sum - n) % 2 == 0)
            cout << "YES"<<"\n";
        else
            cout << "NO\n"<<"\n";
    }
    return 0;
}