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
    string s;
    cin >> s;
    ll n = s.size();
    vector<pair<char, ll>> order;

    ll mn = min(s[0], s[n - 1]);
    ll mx = max(s[0], s[n - 1]);

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= mn && s[i] <= mx)
            order.push_back({s[i], i});
    }

    sort(order.begin(), order.end(), [&](pair<char, ll> a, pair<char, ll> b)
         { return a.second < b.second; });

    if (order.size() > 2)
    {
        sort(order.begin() + 1, order.begin() + order.size() - 1, [&](pair<char, ll> a, pair<char, ll> b)
             {
            if(s[0]>s[n-1])return a.first>b.first;
            return a.first<b.first; });
    }

    vector<ll> seq;
    seq.push_back(1);
    ll moves = 0;

    for (int i = 1; i < order.size(); i++)
    {
        moves += abs(order[i].first - order[i - 1].first);
        seq.push_back(order[i].second + 1);
    }

    cout << moves << " " << seq.size() << "\n";

    for (int i : seq)
        cout << i << " ";
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