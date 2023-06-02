/*
9
1 2 3 1 4 5 2 3 6
3


10
8 5 10 7 9 4 15 12 90 13
4

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
    multiset<int> mlt;
    int i = 0, j = 0;
    vector<int> v;

    while (j < n)
    {
        mlt.insert(arr[j]);
        if (j < k - 1)
        {
            j++;
        }
        else
        {
            auto mx_element = *mlt.rbegin();
            v.push_back(mx_element);
            auto it = mlt.find(arr[i]);
            mlt.erase(it);
            i++;
            j++;
        }
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}