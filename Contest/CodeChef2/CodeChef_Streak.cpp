#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll A[n];
        ll B[n];

        for (int i = 0; i < n; i++)
            cin >> A[i];

        for (int i = 0; i < n; i++)
            cin >> B[i];

        ll count1 = 0, count2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (A[0] != 0)
                ;
            if (A[i + 1] == 0)
                break;
            count1++;
        }

        for (int i = 0; i < n; i++)
        {
            if (B[0] == 0)
                ;

            if (B[i + 1] == 0)
                break;
            count2++;
        }

        if (count1 == count2)
            cout << "Draw"
                 << "\n";
        else if (count1 > count2)
            cout << "Om"
                 << "\n";
        else
            cout << "Addy"
                 << "\n";
    }
    return 0;
}