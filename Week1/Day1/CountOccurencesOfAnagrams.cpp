/*
forxxorfxdofr
for

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string txt, ptr;
    cin >> txt >> ptr;
    int count = 0;

    int n = txt.length();
    int k = ptr.length();
    // cout<<k<<"\n";

    // int freqtxt[26] = {0};
    // int freqptr[26] = {0};

    vector<int> freqtxt(26, 0);
    vector<int> freqptr(26, 0);

    for (int i = 0; i < k; i++)
        freqptr[ptr[i] - 97]++;

    cout << freqptr[k] << "\n";
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
            if (freqtxt != freqptr)
                flag = false;
            if (flag)
                count++;
            freqtxt[txt[i] - 97]--;
            i++;
            j++;
        }
    }
    cout << count << "\n";
}
