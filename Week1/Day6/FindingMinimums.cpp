#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int flag = 1;
    int count = 0;
    int min;

    for (int i = 1; i <= n; i++)
    {
        int value;
        cin >> value;
        if (flag == 1)
        {
            min = value;
            flag = 0;
        }
        else
        {
            if (value < min)
                min = value;
        }
        count++;

        if (count == k || i == n)
        {
            cout << min << " ";
            count = 0;
            flag = 1;
        }
    }
    return 0;
}