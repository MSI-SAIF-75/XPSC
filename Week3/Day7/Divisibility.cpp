#include <bits/stdc++.h>
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
using namespace std;

ll t;
void doWork()
{
    ll n;
    cin >> n;
    vector<ll> arr(n + 1);
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        while (arr[i] % 2 == 0)
        {
            sum++;
            arr[i] /= 2;
        }
    }

    vector<ll> v;
    for (int i = 1; i <= n; i++)
    {
        ll count = 0, temp = i;
        while (temp % 2 == 0)
        {
            count++;
            temp /= 2;
        }
        if (count > 0)
            v.push_back(count);
    }

    sort(v.begin(), v.end());

    // for(int i = 0; i<v.size(); i++)cout<<v[i]<<" ";

    ll ans = 0;
    while (sum < n && v.size() > 0)
    {
        sum += v.back();
        ans++;
        v.pop_back();
    }
    if (sum < n)
    {
        cout << -1 << "\n";
        return;
    }
    else
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