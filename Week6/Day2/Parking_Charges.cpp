#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, h;
    cin >> x >> y >> h;
    int extra = h - 1;
    int pay = extra * y;
    int total = x + pay;
    cout << total << "\n";
}