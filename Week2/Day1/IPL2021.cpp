#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    multiset<int> mls;
    vector<int> v;

    int i = 0, j = 0;
    while (j < n)
    {
        mls.insert(arr[j]);
        if (j < k - 1)
            j++;
        else
        {
            auto mxElement = *(mls.rbegin());
            v.push_back(mxElement);

            auto it = mls.find(arr[i]);
            mls.erase(it);
            i++;
            j++;
        }
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}