#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    int i = 0, j = 1;
    for (int i = 0; i < n; i += 2)
    {
        if (s[i] == 'a' && s[i + 1] == 'a')
        {
            ans++;
            s[i+1] = 'b';
        }
        else if (s[i] == 'b' && s[i + 1] == 'b')
        {
            ans++;
            s[i] = 'a';
        }
    }
    cout << ans << '\n';
    cout << s << '\n';
    return 0;
}