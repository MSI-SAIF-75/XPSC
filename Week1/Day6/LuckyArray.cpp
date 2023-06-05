#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    map<int, int> mp;

    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    int mn = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (mn > arr[i])
            mn = arr[i];
    }
    if (mp[mn] % 2 == 1)
        cout << "Lucky"
             << "\n";
    else
        cout << "Unlucky"
             << "\n";
    return 0;
}