#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;
    long long int arr[m+1] = {0};

    for (int i = 1; i <= n; i++)
    {
        int value;
        cin >> value;

        if (arr[value] == 0)
            arr[value] = 1;
        else
            arr[value]++;
    }

    for (int i = 1; i <= m; i++)
        cout << arr[i] << "\n";
    return 0;
}