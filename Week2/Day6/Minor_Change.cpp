#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    string str2;
    cin >> str1 >> str2;
    int count = 0;

    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] != str2[i])
            count++;
    }
    cout << count << "\n";
}