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
    vector<int> index(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        index[x] = i;
    }

    // cout<<indx[1]<<"\n";
    if (index[n] < min(index[1], index[2]))
        cout << index[n] << " " << min(index[1], index[2]) << "\n";
    else if (index[n] > max(index[1], index[2]))
        cout << index[n] << " " << max(index[1], index[2]) << "\n";
    else
        cout << index[1] << " " << index[2] << "\n";
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