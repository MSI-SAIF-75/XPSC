// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int n, m, k;
//     cin >> n >> m >> k;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     vector<pair<int, int>> p;
//     vector<long long> v;
//     for (int i = 0; i < m; i++)
//     {
//         int l, r;
//         long long d;
//         cin >> l >> r >> d;
//         p.push_back({l, r});
//         v.push_back(d);
//     }

//     map<long long, long long> mk;
//     while (k--)
//     {
//         int x, y;
//         cin >> x >> y;
//         mk[x]++;
//         mk[y + 1]--;
//     }
//     vector<long long> idxk;
//     long long s = 0;
//     for (int i = 0; i < n; i++)
//     {
//         s += mk[i + 1];
//         idxk.push_back(s);
//     }

//     for (int i = 0; i < m; i++)
//         v[i] = v[i] * idxk[i];

//     map<long long, long long> mpm;
//     for (int i = 0; i < n; i++)
//     {
//         int l = p[i].first;
//         int r = p[i].second;

//         mpm[l] += (v[i]);
//         mpm[r + 1] -= (v[i]);
//     }

//     vector<long> idxm;
//     long long sm = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sm += mpm[i + 1];
//         idxm.push_back(sm);
//     }

//     for (int i = 0; i < n; i++)
//         cout << idxm[i] + a[i] << " ";
//     cout << "\n";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int a[100005];
long long kk[100005];
long long mm[100005];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<pair<int, int>> p(m);
    vector<long long> v(m);

    for (int i = 0; i < m; i++)
    {
        int l, r, x;
        cin >> l >> r >> x;
        p[i] = {l, r};
        v[i] = x;
    }
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        kk[x]++;
        kk[y + 1]--;
    }
    long long s = 0;
    for (int i = 0; i < m; i++)
    {
        s += kk[i + 1];
        kk[i] = s;
    }

    for (int i = 0; i < m; i++)
        v[i] = v[i] * kk[i];

    for (int i = 0; i < m; i++)
    {
        int l = p[i].first;
        int r = p[i].second;

        mm[l] += (v[i]);
        mm[r + 1] -= (v[i]);
    }
    long long sm = 0;
    for (int i = 0; i < n; i++)
    {
        sm += mm[i + 1];
        mm[i] = sm;
    }
    for (int i = 0; i < n; i++)
        cout << mm[i] + a[i] << " ";
}