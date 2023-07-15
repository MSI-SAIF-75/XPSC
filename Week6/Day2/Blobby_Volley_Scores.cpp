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
    string s;
    cin >> s;
    int cntA = 0;
    int cntB = 0;
    int server = 0;

    for (int i = 0; i < n; i++)
    {
        if (server == 0)
        {
            if (s[i] == 'A')
                cntA++;
            else
                server = 1;
        }
        else
        {
            if (s[i] == 'B')
                cntB++;
            else
                server = 0;
        }
    }
    cout << cntA << " " << cntB << "\n";
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