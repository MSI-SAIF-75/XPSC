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
    vector<int> a(4);
    for (int i = 0; i < 4; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    int sum = 0;
    for (int i = 0; i < 3; i++)
        sum += a[i];

    if (sum < a[3])
        cout << "YES\n";
    else
        cout << "NO\n";
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