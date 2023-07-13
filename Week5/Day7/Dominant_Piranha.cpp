#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int t;
void doWork()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    // cout << mx << "\n";
    int indx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != mx)
            continue;

        if (i > 0 && a[i - 1] != mx)
            indx = i + 1;
        if (i < n - 1 && a[i + 1] != mx)
            indx = i + 1;
    }
    cout << indx << "\n";
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