#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int main()
{
    Faster;
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int massi = a * 2 + b;
    int ron = x * 2 + y;

    if (massi > ron)
        cout << "Messi"
             << "\n";
    else if (massi < ron)
        cout << "Ronaldo"
             << "\n";
    else
        cout << "Equal"
             << "\n";

    return 0;
}