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
    string s;
    cin >> s;
    string cmp = "314159265358979323846264338327";
    ll count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == cmp[i])
            count++;
        else
            break;
    }
    cout << count << "\n";
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