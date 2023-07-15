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
    if ((n > 0) && (n <= 10))
        cout << "Lower Double"
             << "\n";
    else if ((n > 10) && (n <= 15))
        cout << "Lower Single"
             << "\n";
    else if ((n > 15) && (n <= 25))
        cout << "Upper Double"
             << "\n";
    else if ((n > 25) && (n <= 30))
        cout << "Upper Single"
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