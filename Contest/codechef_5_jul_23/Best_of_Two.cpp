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
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    if (a1 < a2)
    {
        if (a1 < a3)
        {
            a1 = 0;
        }
        else
            a3 = 0;
    }
    else
    {
        if (a2 < a3)
            a2 = 0;
        else
            a3 = 0;
    }

    if (b1 < b2)
    {
        if (b1 < b3)
        {
            b1 = 0;
        }
        else
            b3 = 0;
    }
    else
    {
        if (b2 < b3)
            b2 = 0;
        else
            b3 = 0;
    }

    int mxa = a1 + a2 + a3;
    int mxb = b1 + b2 + b3;

    if (mxa > mxb)
        cout << "Alice"
             << "\n";
    else if (mxa < mxb)
        cout << "Bob"
             << "\n";
    else
        cout << "Tie"
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