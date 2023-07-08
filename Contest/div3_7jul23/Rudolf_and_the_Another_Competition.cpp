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
    int n, m, h;
    cin >> n >> m >> h;
    vector<vector<int>>arr(n,vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<pair<int, int>> attends(n);
    for (int i = 0; i < n; i++)
    {
        attends[i].first = 0;
        attends[i].second = i;
    }

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            attends[i].first += arr[i][j];
        }
    }

    sort(attends.begin(), attends.end());
    int place = n;
    for (int i = 0; i < n; i++)
    {
        if (attends[i].second == 0)
        {
            place = i + 1;
            break;
        }
    }

    cout << place << "\n";
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