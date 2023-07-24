#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt = 0;
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == "X++" || a[i]=="++X")
            cnt++;
        else
            cnt1++;
    }

    cout << cnt - cnt1 << "\n";
    return 0;
}