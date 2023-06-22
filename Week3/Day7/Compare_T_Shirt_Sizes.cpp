#include <bits/stdc++.h>
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
using namespace std;

ll t;
void doWork()
{
    string a, b;
    cin >> a >> b;
    int n = a.size() - 1;
    int m = b.size() - 1;
    if (a == b)
        cout << "="
             << "\n";
    else if (a[n] == 'L' && b[m] != 'L')
        cout << '>' << '\n';
    else if (a[n] != 'L' && b[m] == 'L')
        cout << '<' << '\n';
    else if (a[n] == 'M' && b[m] != 'M')
        cout << '>' << '\n';
    else if (a[n] != 'M' && b[m] == 'M')
        cout << '<' << '\n';
    else if (a[n] == 'S' && n < m)
        cout << '>' << '\n';
    else if (a[n] == 'S')
        cout << '<' << '\n';
    else if (n < m)
        cout << '<' << '\n';
    else
        cout << '>' << '\n';
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