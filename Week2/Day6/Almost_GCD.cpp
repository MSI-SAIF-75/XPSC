#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans1 = 0, ans2;
    for (int k = 2; k <= 1000; k++)
    {
        int c = 0;
        for (int i : a)
            if (i % k == 0)
                c++;
        if (ans1 < c)
        {
            ans1 = c;
            ans2 = k;
        }
    }
    cout << ans2 << endl;
}