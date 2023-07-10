#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int main()
{
    Faster;
    int n, k;
    cin >> n >> k;
    int temp = n;
    while (k--)
    {
        if (temp % 10 != 0)
            temp --;
        else
        {
            temp /= 10;
        }
    }
    cout << temp << "\n";
    return 0;
}