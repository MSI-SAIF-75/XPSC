#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sumA = 0;
    int sumB = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
            sumA += x;
        else
            sumB += x;
    }

    cout << (sumA - sumB) << "\n";
    return 0;
}