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

    vector<int> v;
    int sumE = 0, sumO = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            v.push_back(i);
            sumE += i;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            v.push_back(i);
            sumO += i;
        }
    }

    if (sumE > sumO)
    {
        int x = sumE - sumO;
        v[v.size() - 1] = v[v.size() - 1] + x;
    }
    else
        cout << "NO"
             << "\n";

    if (v[v.size() - 1] % 2 == 1)
    {
        cout << "YES"
             << "\n";
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout<<"\n";
    }
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