#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int

int t;
void doWork()
{
    int n;
    cin >> n;

    if ((n & 1) == 0 && n % 7 == 0)
        cout << "Alice"
             << "\n";
    else if ((n & 1) && n % 9 == 0)
        cout << "Bob"
             << "\n";
    else
        cout << "Charlie"
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