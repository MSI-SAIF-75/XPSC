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

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i] + 1] >= 1)
            count++;
    }
    cout << count << "\n";
    return 0;
}
