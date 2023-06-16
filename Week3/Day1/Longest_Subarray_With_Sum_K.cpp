#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, k;
    cin >> n >> k;

    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll sum = 0, mx = 0;
    ll i = 0, j = 0;
    while (j < n)
    {
        sum += arr[j];
        if (sum > k)
        {
            while (sum > k)
            {
                sum -= arr[i];
                i++;
            }
        }

        if (sum == k)
            mx = max(mx, j - i + 1);
        j++;
    }
    cout << mx << "\n";
    return 0;
}