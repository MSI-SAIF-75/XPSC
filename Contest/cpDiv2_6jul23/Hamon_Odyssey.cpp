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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k = arr[0];
    for (int i = 1; i < n; i++)
        k &= arr[i];

    if (k != 0)
    {
        cout << 1 << "\n";
        return;
    }

    int count = 0, temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (temp == k)
        {
            count++;
            temp = arr[i];
        }
        else
            temp &= arr[i];
    }

    if (temp == 0)
        count++;

    cout << count << "\n";
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