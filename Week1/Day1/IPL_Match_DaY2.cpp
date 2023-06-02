/*
9
1 2 3 1 4 5 2 3 6
3

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cin >> k;

    list<int> li;
    int i = 0, j = 0;
    int mx = INT_MIN;

    while (j < n)
    {
        li.push_back(arr[j]);
        if (j < k - 1)
        {
            j++;
        }
        else
        {
            // int front = li.max_size();
            // cout << front << "\n";
            // mx = max(front, mx);
            // cout << mx << " ";

            auto mx = max_element(li.begin(), li.end());

            mx -= arr[i];
            i++;
            j++;
        }
    }
    return 0;
}