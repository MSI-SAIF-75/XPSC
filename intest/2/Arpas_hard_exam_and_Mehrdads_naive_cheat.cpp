#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int res = 1;
    int a = 1378;
    while (n)
    {
        if (n & 1)
        {
            res = (res * a) % 10;
            n--;
        }
        else
        {
            a = (a * a) % 10;
            n /= 2;
        }
    }

    cout << res << "\n";
    return 0;
}