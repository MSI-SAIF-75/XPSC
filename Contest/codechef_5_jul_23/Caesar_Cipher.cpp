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
    int n;
    cin >> n;
    string s, t, u;
    cin >> s >> t >> u;

    int k = (t[0]) - (s[0]);

    string result = "";
    for (int i = 0; i < n; i++)
    {
        char ch = u[i];
        char c = (ch - 'a' + k) % 26 + 'a';
        result += c;
    }
    cout << result << "\n";
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