#include <bits/stdc++.h>
using namespace std;

int main()
{
    string first, second;
    cin >> first >> second;

    int n = first.length();
    int k = second.length();
    int count = 0;

    int freqFirst[26] = {0};
    int freqSecond[26] = {0};

    for (int i = 0; i < k; i++)
        freqSecond[second[i] - 'A']++;

    int i = 0, j = 0;

    while (j < n)
    {
        freqFirst[first[j] - 'A']++;
        if (j < k - 1)
        {
            j++;
        }
        else
        {
            bool flag = true;
            for (int v = 0; v < 26; v++)
            {
                if (freqFirst[v] != freqSecond[v])
                    flag = false;
            }
            if (flag)
                count++;
            freqFirst[first[i] - 'A']--;
            i++;
            j++;
        }
    }
    cout << count << "\n";
}