#include <bits/stdc++.h>
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
using namespace std;

ll t;
// void doWork()
// {
// ll n;
// cin >> n;
// string s;
// cin >> s;

// string temp = "meow";

// for (int i = 0; i < n; i++)
// {
//     if (s[i] == 'M' || s[i] == 'm')
//         s[i] = 'm';
//     else if (s[i] == 'E' || s[i] == 'e')
//         s[i] = 'e';
//     else if (s[i] == 'O' || s[i] == 'o')
//         s[i] = 'o';
//     else if (s[i] == 'W' || s[i] == 'w')
//         s[i] = 'w';
// }

// string ss = "";
// for(int i = 0; i<n; i++){
//     if(ss.empty() or ss.back()!=s[i])ss.push_back(s[i]);
// }

// for(int i = 0; i<ss.size(); i++)cout<<ss[i];

// if (temp == ss)
//     cout << "YES"
//          << "\n";
// else
//     cout << "NO"
//          << "\n";
// }

void doWork()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] <= 90)
            s[i] += 32;
    }

    string temp = "meow";
    string ss = "";
    for (int i = 0; i < n; i++)
        if (ss.empty() || ss.back() != s[i])
            ss.push_back(s[i]);

    // for (int i = 0; i < ss.size(); i++)
    //     cout << ss[i];

    if (temp == ss)
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