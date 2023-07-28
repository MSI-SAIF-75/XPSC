#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int mn = min(a, b);
    cout << mn << " ";

    int mx = max((a - mn) / 2, (b - mn) / 2);
    cout << mx << "\n";
    return 0;
}