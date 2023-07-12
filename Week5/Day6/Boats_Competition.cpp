#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int t;
void doWork()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a.begin() + 1, a.end());
    int ans = 0;
    for (int sum = 1; sum <= 1000; sum++)
    {
        int count = 0;

        for (int i = 1, j = n; i < j;)
        {
            if (a[i] + a[j] > sum)
                j--;
            else if (a[i] + a[j] < sum)
                i++;
            else
            {
                count++;
                i++;
                j--;
            }
        }
        ans = max(ans, count);
    }
    cout << ans << "\n";
}

int main()
{
    Faster;
    cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}