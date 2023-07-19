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
    string s;
    cin >> s;

    int cnt = 0;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            mx = max(mx, cnt);
            cnt = 0;
        }
        else
            cnt++;
    }
    mx = max(mx, cnt);
    // cout<<mx<<"\n";
    if (mx >= 4)
    {
        if (n < 4)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else
        cout << "YES\n";
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