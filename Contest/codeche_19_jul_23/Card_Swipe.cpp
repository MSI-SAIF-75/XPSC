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

    map<int, int> mp;
    int cnt = 0;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (!mp[a[i]])
        {
            cnt++;
            mx = max(mx, cnt);
            mp[a[i]]++;
        }
        else
        {
            mp[a[i]]--;
            cnt--;
        }
    }

    mx = max(mx, cnt);
    cout << mx << "\n";
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