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
    int n, a, b;
    cin >> n >> a >> b;

    for (int i = 0; i < n; i++)
    {
        cout << char('a' + i % b);
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