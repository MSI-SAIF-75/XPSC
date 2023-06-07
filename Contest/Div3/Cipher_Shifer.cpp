#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int l = 0, r = 1;
        string ans = "";
        while (r < n)
        {
            if (str[l] != str[r])
            {
                r++;
            }
            else
            {
                ans += str[l];
                l = r + 1;
                r = r + 2;
            }
        }
        cout << ans << "\n";
    }
}

/*
1
8
abacabac
*/