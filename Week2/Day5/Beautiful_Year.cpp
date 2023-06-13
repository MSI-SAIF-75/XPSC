#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    while (1)
    {
        y++;
        int ans = y;
        string str = to_string(ans);

        set<char> st;
        for (int i = 0; i < str.size(); i++)
            st.insert(str[i]);

        if (st.size() == 4)
        {
            cout << ans << "\n";
            break;
        }
        else
            ans = stoi(str);
    }
    return 0;
}