#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int

int t;
void doWork()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    unordered_set<int> um(a.begin(), a.end());

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int d = a[j] - a[i];
            if (um.find(a[j] + d) != um.end())
                flag = true;
        }
    }

    // for(auto it : um)cout<<it<<" ";

    if (flag == true)
        cout << "NO"
             << "\n";
    else
        cout << "YES"
             << "\n";
}

// void doWork()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     bool f = true;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 if (a[j] - a[i] == a[k] - a[j])
//                     f = false;
//             }
//         }
//     }

//     if (f == true)
//         cout << "YES"
//              << "\n";
//     else
//         cout << "NO"
//              << "\n";
// }

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