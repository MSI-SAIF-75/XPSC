#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

ll t;
void doWork()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    vector<char> add;
    for (int i = 0; i < n; i++)
    {
        if ((i + 2 <= n && s[i + 2] == '0') && (i + 3 >= n || s[i + 3] != '0'))
        {
            int asci = (s[i] - '0') * 10 + (s[i + 1] - '0');
            add.push_back(96 + asci);
            i += 2;
        }
        else
            add.push_back(96 + (s[i] - '0'));
    }

    for (int i = 0; i < add.size(); i++)
        cout << add[i];
    cout<<"\n";
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