#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> v;

/*
2^15 || 1<<15
32768
32800
*/
/*
// to_string replace
string convert(ll val){
    string ans = "";
    while(val!=0){
        int d = val%10;
        ans += (d+'0');
        val/=10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
*/

/*
--- breifly code for palindrome --- down comments
bool isPalindrome(ll val)
{
    string str = to_string(val);
    int flag = 1;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != str[str.size() - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
*/

bool isPalindrome(ll val)
{
    string str = to_string(val);
    string str1 = str;
    reverse(str.begin(), str.end());
    return str == str1;
}

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    unordered_map<ll, ll> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            ll k = a[i] ^ v[j];
            if (k > 1 << 15)
                continue;

            // ll x = freq[k];
            // if (x != 0)
            //     cout << a[i] << " " << k << "\n";

            if (freq[k] != 0)
                ans += freq[k];
        }
    }
    cout << (ans + n) / 2 << "\n";
}

int main()
{
    for (int i = 0; i <= 32800; i++)
    {
        if (isPalindrome(i))
            v.push_back(i);
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}