#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;

int t;
void solve()
{
    int n;
    ll k;
    cin >> n >> k;
    deque<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push_back(x);
    }

    if (k >= n - 1)
    {
        cout << n << "\n";
        return;
    }

    int cnt = 0;
    while (1)
    {
        deque<int>::iterator p = q.begin();
        int x = q.front();
        p++;

        while (p != q.end())
        {
            if (x > *p)
            {
                cnt++;
                p++;
            }
            else
                break;
        }

        if (cnt >= k)
        {
            cout << x << "\n";
            return;
        }
        cnt = 1;
        q.pop_front();
        q.push_back(x);
    }
}

int main()
{
    Faster;
    solve();
    return 0;
}