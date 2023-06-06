#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int s = 0;
    int e = str.size() - 1;

    int flag = 1;

    while (e > s)
    {
        if (str[s++] != str[e--])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";

    return 0;
}