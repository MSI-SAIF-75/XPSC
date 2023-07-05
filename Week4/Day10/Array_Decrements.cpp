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

    int ra[n];
    int rb[n];

    for (int i = 0; i < n; i++)
        cin >> ra[i];

    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> rb[i];
        ra[i] = ra[i] - rb[i];
        mx = max(mx, ra[i]);
    }

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (ra[i] == mx || rb[i] == 0)
            continue;
        flag = false;
    }
    if (flag == true)
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