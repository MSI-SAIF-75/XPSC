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

    int count = 0;
    while (n != 50)
    {
        if (n < 50)
        {
            count++;
            n += 2;
        }
        else
        {
            count++;
            n -= 3;
        }
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