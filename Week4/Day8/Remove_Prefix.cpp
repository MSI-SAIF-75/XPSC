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

    ll visited = 0;
    set<ll> s;
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(arr[i]);
        visited++;
        if (visited > s.size())
            break;
    }
    cout << (n - s.size()) << "\n";
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