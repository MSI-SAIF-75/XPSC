#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    int x = n;
    int ans = 0;
    for (int i = 2; i * i <= x; i++)
    {
        while (x % i == 0)
        {
            ans++;
            x /= i;
        }
    }

    if (x > 1)
        ans++;
    cout << n << " : " << ans << "\n";
    return 0;
}