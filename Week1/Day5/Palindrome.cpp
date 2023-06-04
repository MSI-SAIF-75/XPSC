#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int temp = n, sum = 0;
    while (n != 0)
    {
        long long int reminder = n % 10;
        sum = (sum * 10) + reminder;
        n /= 10;
    }
    cout << sum << "\n";
    if (sum == temp)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";

    return 0;
}