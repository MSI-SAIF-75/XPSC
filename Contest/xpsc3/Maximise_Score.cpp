#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int

int t;
void doWork()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> add;
    int alice = -1, bob = -1;

    for (int i = 0; i < n; i++)
    {
        if (i - 1 >= 0)
            alice = abs(a[i] - a[i - 1]);
        if (i + 1 < n)
            bob = abs(a[i] - a[i + 1]);

        int x = max(alice, bob);
        // cout<<x<<" ";
        add.push_back(x);
    }

    // for(int i = 0; i<n; i++)cout<<add[i]<<" ";

    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, add[i]);
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