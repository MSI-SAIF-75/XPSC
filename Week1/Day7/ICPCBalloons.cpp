#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[26] = {0};
        int ans = 0;
        while (n--)
        {
            char ch;
            cin >> ch;

            int index = (int)(ch - 65);
            // cout<<index<<" ";
            if (arr[index]==0)
            {
                ans += 2;
                arr[index]++;
                // cout<<ans<<" ";
            }
            else
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}