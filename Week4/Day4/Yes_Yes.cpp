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
    string s;
    cin >> s;

    string str = "";
    for (int i = 0; i < 100; i++)
        str += "Yes";
    bool flag = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (i + s.size() - 1 < str.size() && str.substr(i, s.size())==s)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
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