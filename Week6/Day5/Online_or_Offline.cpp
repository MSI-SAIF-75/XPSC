#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int

ll t;
void doWork()
{
    ll n, m;
    cin >> n >> m;

    float disCount = n - 0.1 * n;
    // cout<<amount<<" ";
    if (disCount < m)
        cout << "ONLINE\n";
    else if (disCount > m)
        cout << "DINING\n";
    else
        cout << "EITHER\n";
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