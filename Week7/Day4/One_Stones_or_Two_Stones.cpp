#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, y;
        cin >> x >> y;

        long long dif = abs(x - y);
        if (dif >= 2)
        {
            if (x > y)
                cout << "CHEF\n";
            else
                cout << "CHEFINA\n";
        }
        else
        {
            if (x == y)
            {
                if (x % 2)
                    cout << "CHEF\n";
                else
                    cout << "CHEFINA\n";
            }
            else
            {

                long long mn = min(x, y);
                if (mn % 2)
                    cout << "CHEF\n";
                else
                    cout << "CHEFINA\n";
            }
        }
    }
    return 0;
}