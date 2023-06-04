#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = round(n / 2.0);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i == j) && (i != a) && (j != a))
                cout << "\\";
            else if (i == a && j == a)
                cout << "X";
            else if ((j == n - i + 1))
                cout << "/";
            else
                cout << "*";
        }
        cout << "\n";
    }
    return 0;
}