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
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            count1++;
        else
            count2++;
    }

    if (count1 % 2 == 0 && count2 % 2 == 0)
        cout << "YES"
             << "\n";
    else if (count1 % 2 == 0 && count2 % 2 == 1 && count1 > 0)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
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