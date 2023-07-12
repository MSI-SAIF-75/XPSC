// O(n*log(log(n)))

#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int t;
ll prime[300000];
int nPrime;
ll mark[3000002];
void doWork()
{
    int n;
    cin >> n;
    int limit = sqrt(n);

    mark[1] = 1;
    for (int i = 4; i <= n; i += 2)
        mark[i] = 1;

    prime[nPrime++] = 2;

    for (int i = 3; i <= n; i += 2)
    {
        if (mark[i] != 1)
        {
            prime[nPrime++] = i;

            if (i <= limit)
            {
                for (int j = i * i; j <= n; j += i * 2)
                    mark[j] = 1;
                // cout << j << " ";
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        if (prime[i] != 0)
            cout << prime[i] << " ";
    }
    cout << "\n";
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