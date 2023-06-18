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
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            if (arr[i + 1] == arr[i + 2])
                flag = 1;
            else
            {
                ll x = abs(arr[i + 1] - arr[i + 2]);
                if (x == 1)
                    flag = 1;
            }
        }
    }
    if (flag == 1)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
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