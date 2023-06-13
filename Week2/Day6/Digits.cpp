#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, k;
    cin >> n >> k;
    ll count = 0;
    while (n != 0)
    {
        int d = n % k;
        count++;
        n /= k;
    }
    cout << count << "\n";
}