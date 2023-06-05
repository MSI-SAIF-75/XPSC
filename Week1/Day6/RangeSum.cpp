#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int a, b;
        cin >> a >> b;

        long long int mx = max(a, b);
        long long int mn = min(a, b);
        mn--;

        long long int lowest = (mn * (mn + 1)) / 2;
        long long int highest = (mx * (mx + 1)) / 2;

        cout << highest - lowest << "\n";
    }
    return 0;
}