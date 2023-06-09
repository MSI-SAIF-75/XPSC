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

        int t = n * x;
        int count = 0;
        while (t != 0)
        {
            int digits = t % 10;
            count++;
            t /= 10;
        }
        if (count == 5)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}