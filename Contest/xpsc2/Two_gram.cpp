#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

void doWork()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans;
    int preIndex = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int currentIndex = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (s[i] == s[j] && s[i + 1] == s[j + 1])
            {
                currentIndex++;
                
            }
        }
    }
    cout << ans << "\n";
}

int main()
{
    Faster;
    doWork();
    return 0;
}