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
    ll n = s.size();

    set<char> st;
    ll j = 0;
    ll count = 1;
    while (j < n)
    {
        st.insert(s[j]);
        if (st.size() > 3)
        {
            count++;
            st.clear();
            st.insert(s[j]);
        }
        j++;
    }
    cout << count << "\n";
    // cout<<st.size()<<"\n"
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