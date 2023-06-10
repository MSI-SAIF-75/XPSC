#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // int arr[n];
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //         reverse(arr, arr + i);
    // }
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    // for (int i = 0; i < n; i++)
    // {
    //     if (v[i] == 0)
    //     {
    //         int j = i - 1;
    //         int k = 0;
    //         while (k <= j)
    //         {
    //             swap(v[k], v[j]);
    //             j--;
    //             k++;
    //         }
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            reverse(v.begin(), v.begin() + i);
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    return 0;
}