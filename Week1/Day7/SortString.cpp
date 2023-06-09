#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[26] = {0};

    while (t--)
    {
        char ch;
        cin >> ch;

        arr[(int)(ch - 'a')]++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (arr[i] != 0)
        {
            cout << (char)(i + 'a');
            arr[i]--;
        }
    }

    return 0;
}