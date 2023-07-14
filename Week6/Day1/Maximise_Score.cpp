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

    vector<int> bob;
    int left = -1, right = -1;
    for (int i = 0; i < n; i++)
    {
        if (i - 1 >= 0)
            left = abs(a[i] - a[i - 1]);
        if (i + 1 < n)
            right = abs(a[i] - a[i + 1]);
        bob.push_back(max(left, right));
    }

    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, bob[i]);
    }
    cout << mn << "\n";
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