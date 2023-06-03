#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
        cout << a + b << "\n";
    else
    {
        if (a > b)
            cout << a + a-- << "\n";
        else
            cout << b + b-- << "\n";
    }
    return 0;
}