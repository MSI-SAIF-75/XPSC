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
    char a1, a2;
    cin >> a1 >> a2;
    int ch1 = a1 - 'a';
    int ch2 = a2 - 'a';

    if (ch2 > ch1)
        cout << ch1 * 25 + ch2 << "\n";
    else
        cout << ch1 * 25 + ch2 + 1 << "\n";
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