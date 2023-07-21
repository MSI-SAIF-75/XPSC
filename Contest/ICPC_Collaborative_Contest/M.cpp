#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<char>> s(n, vector<char>(n));
    vector<vector<char>> m(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> s[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           s[i][j] = m[j][i];
        }
    }

    int rw = 0, rb = 0, cw = 0, cb = 0;
    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == 'W')
                rw++;
            else
                rb++;

            if (s[i][j] == 'W' && s[i][j + 1] == 'W' && s[i][j + 2] == 'W')
            {
                flag = 0;
                break;
            }

            if (s[i][j] == 'B' && s[i][j + 1] == 'B' && s[i][j + 2] == 'B')
            {
                flag = 0;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (m[i][j] == 'W')
                cw++;
            else
                cb++;

            if (m[i][j] == 'W' && m[i][j + 1] == 'W' && m[i][j + 2] == 'W')
            {
                flag = 0;
                break;
            }

            if (m[i][j] == 'B' && m[i][j + 1] == 'B' && m[i][j + 2] == 'B')
            {
                flag = 0;
                break;
            }
        }
    }
    cout<<rw<<" "<<rb<<" "<<cw<<" "<<cb<<"\n";
    if (rw != rb && cw != rb)
    {
        flag = 0;
    }

    cout << flag << "\n";
    return 0;
}