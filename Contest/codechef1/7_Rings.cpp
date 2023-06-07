#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int b, c;
        cin >> b >> c;

        int totalBill = b * c;
        int count = 0;

        while (totalBill != 0)
        {
            int digit = totalBill % 10;
            count++;
            totalBill /= 10;
        }

        if (count == 5)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}