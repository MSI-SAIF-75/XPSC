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
    ll n, b;
    cin >> n >> b;
    vector<ll> add;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if ((num & b) == b)
            add.push_back(num);
    }
    ll sum = -1;
    for (int i = 0; i < add.size(); i++)
        sum &= add[i];
    if (sum == b)
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