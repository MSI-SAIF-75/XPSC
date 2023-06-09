#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    for (int i = 1; i <= str.size(); i++)
    {
        if (i % 2 != 0)
            cout << str[i-1];
    }
    return 0;
}