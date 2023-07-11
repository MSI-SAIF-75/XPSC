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
    int n, m;
    cin>>n>>m;
    char g[n+3][m+3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> g[i][j];
    }
    for (int j = 0; j < m; j++)
    {
        int lost = n - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (g[i][j] == 'o')
                lost = i - 1;
            else if (g[i][j] == '*')
            {
                swap(g[i][j], g[lost][j]);
                lost--;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << g[i][j];
        cout << "\n";
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