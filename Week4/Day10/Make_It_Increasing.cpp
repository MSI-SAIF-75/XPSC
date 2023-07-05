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
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        temp[i] = a[i];
    }

    int count = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        while (a[i] >= a[i + 1] && a[i]!=0)
        {  
            a[i] /= 2;
            count++;
        }

        if (a[i] >= a[i + 1] && a[i]==0)
        {
            cout << -1 << "\n";
            return;
        }
    }
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