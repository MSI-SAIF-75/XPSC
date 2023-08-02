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
    int n;
    cin>>n;
    vector<int> a(n);
	for (int i = 0; i < n; i++) 
		cin >> a[i];
 
	int mai = 0;
	for (int i = 0; i < n; i++)
		if (a[mai] < a[i])
			mai = i;
 
	if (a[mai] <= 0) {
		cout << n - 1 << '\n';
		for (int i = n - 1; i >= 1; i--)
			cout << i << ' ' << i + 1 << '\n';
	}
	else {
		int k = 0;
		while (a[mai] < 20) {
			a[mai] += a[mai];
			k++;
		}
 
		int t = k;
		k += 2 * (n - 1);
 
		cout << k << '\n';
 
		for (int i = 1; i <= t; i++)
			cout << mai + 1 << ' ' << mai + 1 << '\n';
 
		for (int i = 1; i <= n; i++)
			if(i != mai + 1)
				cout << i << ' ' << mai + 1 << '\n';
 
		for (int i = 2; i <= n; i++)
			cout << i << ' ' << i - 1 << '\n';
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