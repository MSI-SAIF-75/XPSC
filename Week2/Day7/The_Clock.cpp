#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string it = s;
    reverse(s.begin(), s.end());
    return it == s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x;
        cin >> x;

        int h = x / 60;
        int m = x % 60;

        int ans = 0;
        unordered_map<string, bool> visited;
        while (!visited[s])
        {
            ans += isPalindrome(s);
            visited[s] = true;

            int hh = ((s[0] - '0') * 10) + (s[1] - '0');
            int mm = ((s[3] - '0') * 10) + (s[4] - '0');

            mm += m;
            if (mm > 59)
                hh++;
            mm %= 60;

            hh += h;
            hh %= 24;

            s[0] = ('0' + (hh / 10));
            s[1] = ('0' + (hh % 10));

            s[3] = ('0' + (mm / 10));
            s[4] = ('0' + (mm % 10));
        }
        cout << ans << "\n";
    }
}