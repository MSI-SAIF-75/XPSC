#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int t;
// void doWork()
// {
//     int n, k, l;
//     cin >> n >> k >> l;
//     vector<pair<int, int>> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i].first;
//         cin >> v[i].second;
//     }
//     sort(v.begin(), v.end(), greater<>());
//     int ans = 0, count = 0;
//     bool flag = false;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j <= k; j++)
//         {
//             if (v[i].second == l)
//             {
//                 ans += v[i].first;
//                 count++;
//                 break;
//             }
//         }
//     }
//     if (flag == true)
//         cout << ans << "\n";
//     else
//         cout << -1 << "\n";
// }

void doWork()
{
    int n, k, l;
    cin >> n >> k >> l;
    vector<int> a(n), b(n);
    vector<int> add;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
        if (b[i] == l)
        {
            add.push_back(a[i]);
        }
    }

    sort(add.begin(), add.end(), greater<>());
    if (add.size() < k)
        cout << -1 << "\n";
    else
    {
        int ans = 0;
        for (int i = 0; i < k; i++)
            ans += add[i];
        cout << ans << "\n";
    }
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