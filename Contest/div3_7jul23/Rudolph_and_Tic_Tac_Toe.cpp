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
    int n = 3;
    char s[4][4];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> s[i][j];
    }
    char c = '.';
    for (int i = 1; i <= n; i++)
    {
        if (s[i][1] == s[i][2] && s[i][2] == s[i][3])
            c = s[i][1];
    }

    for (int i = 1; i <= n; i++)
    {
        if (s[1][i] == s[2][i] && s[2][i] == s[3][i])
            c = s[1][i];
    }

    if (s[1][1] == s[2][2] && s[2][2] == s[3][3])
        c = s[1][1];

    if (s[1][3] == s[2][2] && s[2][2] == s[3][1])
        c = s[1][3];

    if (c == '.')
        cout << "DRAW"
             << "\n";
    else
        cout << c << "\n";
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