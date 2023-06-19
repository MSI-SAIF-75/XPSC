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
    map<ll, ll> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    sort(arr.begin() + 1, arr.end(), greater<ll>());
    ll count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (mp[arr[i]] <= 0)
            continue;
        count++;

        // searching consetive integer
        for (int head = arr[i]; mp.find(head) != mp.end() && mp[head] > 0; head--)
            mp[head]--;
    }
    cout << count << "\n";
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