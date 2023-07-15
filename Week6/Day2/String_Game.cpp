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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            cnt++;
    }

    int ans = min(cnt, n - cnt);
    if (ans & 1)
        cout << "Zlatan"
             << "\n";
    else
        cout << "Ramos"
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