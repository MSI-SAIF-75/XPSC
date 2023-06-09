#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A' && str[i + 1] == 'B' && str[i + 2] == 'C')
            count++;
    }
    cout << count << "\n";
    return 0;
}