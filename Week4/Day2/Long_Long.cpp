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

    bool visite = true;
    ll count = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < 0 && visite)
        {
            count++;
            visite=false;  
        }
        if (arr[i] > 0)
            visite = true;
        sum += abs(arr[i]);
    }
    cout << sum << " " << count << "\n";
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