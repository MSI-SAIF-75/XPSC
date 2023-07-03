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

    ll ans = n;
    ll segSum = 0;
    for (int i = 0; i < n; i++)
    {
        segSum += arr[i];
        ll sum = 0, len = 0, mxlen = i + 1;
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            sum += arr[j];
            if (sum > segSum)
                break;

            if (j == n - 1 && sum == segSum)
            {
                mxlen = max(mxlen, len + 1);
                flag = true;
                break;
            }
            len++;
            if (sum == segSum)
            {
                mxlen = max(mxlen, len);
                len = 0;
                sum = 0;
            }
        }
        if (flag == true)
            ans = min(ans, mxlen);
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