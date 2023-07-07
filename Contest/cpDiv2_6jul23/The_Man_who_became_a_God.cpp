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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        int x = abs(arr[i+1] - arr[i]);
        temp.push_back(x);
    }

    sort(temp.begin(), temp.end(), greater<>());
    int sum = 0;
    for (int i = 0; i < temp.size(); i++)
    {
        if (i < k)
            continue;
        else
            sum += temp[i];
    }
    cout << sum << "\n";
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