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
    ll n;
    cin >> n;
    int root = sqrt(n);
    int sub = n - root;

    if ((sub % root) == 0)
        sub = (sub / root);
    else
        sub = (sub / root) + 1;

    sub = sub + root - 1;

    cout << sub << "\n";
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