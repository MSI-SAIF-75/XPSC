#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    bool flag = false;
    int n = c / a;
    for (int i = 0; i <= n; i++)
    {
        int damageReminder = c - i * a;

        if (damageReminder % b == 0)
        {
            cout << "Yes"
                 << "\n";
            flag = true;
            break;
        }

        // for (int j = 0; j <= c / b; j++)
        // {
        //     int damage = i * a + j * b;
        //     if (damage == c)
        //     {
        //         cout << "Yes"
        //              << "\n";
        //         flag = true;
        //         break;
        //     }
        // }
    }
    if (!flag)
        cout << "No"
             << "\n";
    return 0;
}