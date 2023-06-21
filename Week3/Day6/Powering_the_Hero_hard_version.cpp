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
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    ll ans = 0;
    priority_queue<ll> pq;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            if (pq.empty())
                continue;
            ans += pq.top();
            pq.pop();
        }
        else
            pq.push(arr[i]);
    }
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