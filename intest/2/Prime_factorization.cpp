#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            ans.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        ans.push_back(n);

    int l = ans.size();
    for (int i = 0; i < l - 1; i++)
        cout << ans[i] << "*";
    cout << ans[l - 1] << "\n";

    return 0;
}