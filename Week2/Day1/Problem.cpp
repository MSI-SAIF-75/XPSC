#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a == b)
            cout << "YES\n";
        else
        {
            // if ((a + b * 3) % 2 == 0)
            // or
            if ((b - a) % 2 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}