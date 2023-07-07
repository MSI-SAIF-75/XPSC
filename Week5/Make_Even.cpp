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
    string s;
    cin >> s;

    int n = s.size() - 1;
    int lastValue = s[n] - '0';
    int firstValue = s[0];

    if (lastValue % 2 == 0)
    {
        cout << 0 << "\n";
        return;
    }

    if (firstValue % 2 == 0)
    {
        cout << 1 << "\n";
        return;
    }

    bool flag = false;
    for (auto x : s)
    {
        int v = x - '0';
        if (v % 2 == 0)
            flag = true;
    }

    if (flag == true)
        cout << 2 << "\n";
    else
        cout << -1 << "\n";
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