#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[4] = {"a", "a", "b", "b"};
    int j = 0;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        ans += s[j];
        j++;
        if (j == 4)
            j = 0;
    }
    cout << ans << "\n";
    return 0;
}