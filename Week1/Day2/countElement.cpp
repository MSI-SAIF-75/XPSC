#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    map<int, int> mp;

    for (int i = 0; i < N; i++)
    {
        if (mp.find(arr[i]) == mp.end())
            mp[arr[i]] = 1;
        else
            mp[arr[i]] += 1;
    }

    int count = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        auto finder = mp.find(it->first - 1);
        if (finder != mp.end())
            count += finder->second;
    }
    cout << count << "\n";
    return 0;
}