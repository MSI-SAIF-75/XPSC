#include <bits/stdc++.h>
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
using namespace std;

ll t;
void doWork()
{
    ll n, s, r;
    cin >> n >> s >> r;
    ll now = s - r;
    for (int i = 0; i < n; i++)
    {
        while (s - now < n - i - 1)
        {
            // cout<<now<<" ";
            now--;
        }
        // cout<<"\n";
        cout << now << " ";
        s -= now;
    }
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