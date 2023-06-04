#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long fact = 1;
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            fact *= i;
        cout << fact << "\n";
    }
    return 0;
}