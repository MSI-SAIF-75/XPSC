#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

ll t;
void doWork()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), greater<>());
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";
    // cout << "\n";

    ll ans = 0;
    for (int i = 0; i < arr.size() / 2; i++)
        ans += abs(arr[i] - arr[arr.size() - i - 1]);

    cout << ans << "\n";
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