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
        else if (a > b)
        {
            int t1 = a - 1;
            int t2 = b + 1;
            if (t1 == t2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else if (a < b)
        {
            int t1 = b - 1;
            int t2 = a + 3;

            if (t1 == t2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}