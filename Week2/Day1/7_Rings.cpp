#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        // int T = n * x;
        // int count = 0;
        // while (T != 0)
        // {
        //     int digits = T % 10;
        //     count++;
        //     T /= 10;
        // }
        // if (count == 5)
        //     cout << "YES\n";
        // else
        //     cout << "NO\n";

        int T = n * x;
        if (T >= 10000 && T <= 99999)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}