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

    int s[n];
    int f[n];

    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
        cin >> f[i];

    int d[n];
    int currMx = 0;
    for (int i = 0; i < n; i++)
    {
        currMx = max(currMx, s[i]);
        // cout<<currMx<<"\n";
        d[i] = f[i] - currMx;
        currMx = f[i];
    }

    for (int i = 0; i < n; i++)
        cout << d[i] << " ";
    cout << "\n";
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