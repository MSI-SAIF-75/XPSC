#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 1; i < n; i++)
        cin >> arr[i];

    sort(arr + 1, arr + n);

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] != i)
        {
            cout << i << "\n";
            break;
        }
    }
    return 0;
}