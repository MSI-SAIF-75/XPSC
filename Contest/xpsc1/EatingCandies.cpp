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
        ll count = 0;

        for (int i = 1; i <= (n / 2); i++)
        {
            sum += arr[i];
            count++;
        }
        ll ad = sum;
        for (int i = n; i > n / 2; i--)
        {
            if (sum)
            {
                sum -= arr[i];
                count++;
            }
        }
        cout << count << "\n";
    }
}