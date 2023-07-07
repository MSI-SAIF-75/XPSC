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
    int n;
    cin >> n;

    string s[n + 5];
    for (int i = 0; i < n - 2; i++)
        cin >> s[i];

    string w;
    w = s[0];
    bool flag = true;
    for (int i = 1; i < n - 2; i++)
    {
        if (w[w.size() - 1] == s[i][0])
        {
            w += s[i][1];
        }
        else
        {
            flag = false;
            w += s[i];
        }
    }
    if (flag == true)
        w += 'a';

    cout << w << "\n";
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