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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> ar;
    ar.push_back(a);
    ar.push_back(b);
    ar.push_back(c);
    ar.push_back(d);

    sort(ar.begin(), ar.end());

    // for (int i = 0; i < 4; i++)
    //     cout << ar[i] << " ";

    int x1 = ar[0] + ar[1];
    int x2 = ar[0] + ar[2];
    int x3 = ar[1] + ar[2];

    cout << abs(ar[3] - x1) << " " << abs(ar[3] - x2) << " " << abs(ar[3] - x3) << "\n";
}

int main()
{
    Faster;
    // cin >> t;
    // while (t--)
    // {
    //     doWork();
    // }
    doWork();
    return 0;
}