#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto itL = lower_bound(a.begin(), a.end(), x);
        auto itU = upper_bound(a.begin(), a.end(), x);

        int idxL = itL - a.begin();
        int idxU = itU - a.begin();

        if (idxL == 0)
            cout << "X ";
        else
            cout << a[idxL - 1] << " ";

        if (idxU == n)
            cout << "X\n";
        else
            cout << a[idxU] << "\n";
    }
    return 0;
}