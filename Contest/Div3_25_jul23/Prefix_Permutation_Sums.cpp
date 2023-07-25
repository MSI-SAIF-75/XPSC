#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
const int MOD = 1e9 + 7;

int t;
void solve()
{

    // int n;
    // cin >> n;
    // vector<int> arr(n - 1);
    // set<int> st;
    // st.insert(n);

    ll n;
    cin >> n;
    vector<int> a(n - 1);
    vector<int> sI;
    sI.push_back(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        sI.push_back(i);
    }

    // for (int i = 0; i < n - 1; i++)
    // {
    //     cin >> arr[i];
    //     st.insert(i + 1);
    // }
    int fl = 1;
    int left = -1;
    if (st.find(arr[0]) != st.end())
    {
        st.erase(st.find(arr[0]));
    }

    else
    {
        if (left == -1)
            left = arr[0];
        else
            fl = 0;
    }

    bool f = true;
    int l = -1;
    if (sI[a[0]] != sI.end())
        sI.pop_back();
    for (int i = 1; i < n - 1; i++)
    {
        int diff = arr[i] - arr[i - 1];
        if (st.find(diff) != st.end())
            st.erase(st.find(diff));
        else
        {
            if (left == -1)
                left = diff;
            else
            {
                fl = 0;
                break;
            }
        }
    }
    if (fl == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        int sum = 0;
        for (auto val : st)
            sum += val;
        if (left == -1)
        {
            int req = n * (n + 1) / 2;
            if (req - arr[n - 2] == sum)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if (sum == left)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}

int main()
{
    Faster;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}