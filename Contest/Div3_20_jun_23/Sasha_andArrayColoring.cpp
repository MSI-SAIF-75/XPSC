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

    int sum = 0;
    if (n % 2 == 0)
    {
        for (int i = 1; i < n; i += 2)
        {
            if (abs(arr[i] - arr[i + 1]) != 1)
            {
                ll a = max(arr[i], arr[i + 1]);
                ll b = min(arr[i], arr[i + 1]);
                int sub = abs(a - b);
                sum += sub;
            }
            else
            {
                ll a = max(arr[i], arr[i + 2]);
                ll b = min(arr[i], arr[i + 2]);
                int sub = abs(a - b);
                sum += sub;
                i-=1;
            }
        }
    }
    else
    {
        for (int i = 1; i < n; i += 2)
        {
            if (abs(arr[i] - arr[i + 1]) != 1)
            {
                ll a = max(arr[i], arr[i + 1]);
                ll b = min(arr[i], arr[i + 1]);
                int sub = abs(a - b);
                sum += sub;
            }
            else
            {
                ll a = max(arr[i], arr[i + 2]);
                ll b = min(arr[i], arr[i + 2]);
                int sub = abs(a - b);
                sum += sub;
                i-=1;
            }
        }
    }
    cout << sum << "\n";
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