#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int t;
void doWork()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0 && b == 0 && c == 0)
        cout << "Water filling time"
             << "\n";
    else if (a == 1 && b == 0 && c == 0)
        cout<< "Water filling time"
        << "\n";
    else if (a == 0 && b == 1 && c == 0)
       cout << "Water filling time"
        << "\n";
    else if (a == 0 && b == 0 && c == 1)
       cout << "Water filling time"
        << "\n";
    else
        cout << "Not now"
             << "\n";
}

int main()
{
    Faster;
    cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}