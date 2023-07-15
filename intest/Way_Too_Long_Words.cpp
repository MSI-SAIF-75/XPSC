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
    string s;
    cin >> s;
    if (s.size() <= 10)
        cout << s << "\n";
    else
    {
        int cnt = 0;
        for (int i = 1; i < s.size() - 1; i++)
            cnt++;
        cout << s[0] << cnt << s[s.size() - 1] << "\n";
    }
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