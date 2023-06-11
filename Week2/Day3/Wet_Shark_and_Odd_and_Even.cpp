#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum % 2 == 0)
        cout << sum << "\n";
    else
    {
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if ((sum - arr[i]) % 2 == 0)
            {
                sum -= arr[i];
                cout << sum << "\n";
                break;
            }
        }
    }

    return 0;
}