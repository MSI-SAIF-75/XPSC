#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    int freq[26] = {0};
    int i = 0, j = 0, n = s.size(), uniq = 0, ans = -1;
    while (j < n)
    {
        char ch = s[j];
        if (freq[ch - 'a'] == 0)
            uniq++;
        freq[ch - 'a']++;

        if (uniq > k)
        {
            char leftCh = s[i];
            freq[leftCh - 'a']--;
            if (freq[leftCh - 'a'] == 0)
                uniq--;
            i++;
        }

        if (uniq == k)
            ans = max(ans, j - i + 1);
        j++;
    }
    cout << ans << "\n";
    return 0;
}