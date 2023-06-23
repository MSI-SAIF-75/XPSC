#include <bits/stdc++.h>
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
using namespace std;

vector<ll> palindrome;

bool isPlaindrome(ll n)
{
    string str = to_string(n);
    string temp = str;
    reverse(str.begin(), str.end());
    return str == temp;
}

ll t;
void doWork()
{
    ll n;
    cin >> n;
    ll arr[n];
    unordered_map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < palindrome.size(); j++)
        {
            ll k = arr[i] ^ palindrome[j];

            if (k > 1 << 15)
                continue;
            if (mp[k] != 0)
                ans += mp[k];
        }
    }
    cout << (ans + n) / 2 << "\n";
}

int main()
{
    Faster;
    for (int i = 0; i <= 32700; i++)
    {
        if (isPlaindrome(i))
            palindrome.push_back(i);
    }
    cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}