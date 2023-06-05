#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    int x;
    cin >> x;
    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
        cout << "will take number"
             << "\n";
    else
        cout << "will not take number"
             << "\n";
    return 0;
}