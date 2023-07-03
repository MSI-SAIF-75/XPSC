#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

ll t;
void doWork()
{
    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.size() - 1;
    int m = s2.size() - 1;
    if (s1 == s2)
        cout << '=' << '\n';
    else if (s1[n] == 'L' && s2[m] != 'L')
        cout << '>' << '\n';
    else if (s1[n] != 'L' && s2[m] == 'L')
        cout << '<' << '\n';
    else if (s1[n] == 'M' && s2[m] != 'M')
        cout << '>' << '\n';
    else if (s1[n] != 'M' && s2[m] == 'M')
        cout << '<' << '\n';
    else if (s1[n] == 'S' && n < m)
        cout << '>' << '\n';
    else if (s1[n] == 'S')
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