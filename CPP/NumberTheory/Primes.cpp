#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = n - 2;
    int b = n - a;

    int f = true;

    if (a <= 2)
        f = false;

    for (int i = 3; i * i <= a; i++)
    {
        if (a % i == 0)
            f = false;
    }

    if (f == true)
        cout << a << " " << b << "\n";
    else
        cout << -1 << "\n";

    return 0;
}