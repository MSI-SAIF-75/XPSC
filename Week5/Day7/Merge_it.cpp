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
    vector<int> a(n);
    int freq[3] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i] % 3]++;
    }

    // for (int i = 0; i < n; i++)
    //     cout << freq[i] << " ";

    int ans = freq[0];
    int mn = min(freq[1], freq[2]);
    ans += mn;
    freq[1] -= mn;
    freq[2] -= mn;

    // cout << freq[1] << " " << freq[2] << "\n";

    ans += (freq[1] + freq[2]) / 3;
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