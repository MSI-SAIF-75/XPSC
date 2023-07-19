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
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int om = 0, addy = 0;
    int mxm = 0, mxa = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
            om++;
        else
        {
            mxm = max(mxm, om);
            om = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (b[i] != 0)
            addy++;
        else
        {
            mxa = max(mxa, addy);
            addy = 0;
        }
    }

    mxm = max(mxm, om);
    mxa = max(mxa, addy);
    if (mxm > mxa)
        cout << "Om\n";
    else if (mxm < mxa)
        cout << "Addy\n";
    else
        cout << "Draw\n";
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