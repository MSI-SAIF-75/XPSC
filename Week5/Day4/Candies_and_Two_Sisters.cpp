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
    ll n;
    cin >> n;

    int i = 1, count = 0, temp = n - 1;
    while (temp > i)
    {
        count++;
        i++;
        temp--;
    }
    cout << count << "\n";
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