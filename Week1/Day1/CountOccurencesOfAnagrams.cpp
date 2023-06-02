/*
forxxorfxdofr
for

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string txt, pat;
    cin >> txt >> pat;
    int count = 0;

    int n = txt.length();
    int k = pat.length();

    int freqtxt[26] = {0};
    int freqpat[26] = {0};

    for (int i = 0; i < k; i++)
        freqpat[pat[i] - 97]++;
    int i = 0, j = 0;

    while (j < n)
    {
        freqtxt[txt[j] - 97]++;
        if (j < k - 1)
        {
            j++;
        }
        else
        {
            bool flag = true;
            for (int v = 0; v < 26; v++)
            {
                if (freqtxt[v] != freqpat[v])
                    flag = false;
            }
            if (flag)
                count++;
            freqtxt[txt[i] - 97]--;
            i++;
            j++;
        }
    }
    cout << count << "\n";
}
