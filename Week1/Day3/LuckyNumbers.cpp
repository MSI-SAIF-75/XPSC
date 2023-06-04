#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int flag = 0;

    for (int i = a; i <= b; i++)
    {
        int lucky = 1, x = i;
        while (x)
        {
            if (x % 10 != 4 && x % 10 != 7)
                lucky = 0;
            x /= 10;
        }

        if (lucky == 1)
        {
            cout << i << " ";
            flag = 1;
        }
    }

    if (flag == 0)
        cout << -1 << "\n";
    return 0;
}