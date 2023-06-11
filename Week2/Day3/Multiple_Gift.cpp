#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll x, y;
    cin >> x >> y;
    ll count = 0;
    while (x <= y)
    {
        x += x;
        count++;
    }
    cout << count << "\n";
    return 0;
}