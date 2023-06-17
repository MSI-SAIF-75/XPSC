#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dx[] = {1, 1, -1, -1, 0};
ll dy[] = {-1, 1, 1, -1, 0};

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        char s[8 + 1][8 + 1];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
                cin >> s[i][j];
        }

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                bool flag = true;
                for (int k = 0; k < 5; k++)
                    if (s[i + dx[k]][j + dy[k]] != '#')
                        flag = false;
                if (flag)
                    cout << i+1 << " " << j+1 << "\n";
            }
        }
    }
    return 0;
}