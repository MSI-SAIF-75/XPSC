#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int

int t;
void doWork()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_set<int> hash_table(a.begin(), a.end());

    vector<int> add;

    for (auto i : hash_table)
        add.push_back(i);

    sort(add.begin(), add.end(), greater<>());
    cout << add[0] + add[1] << "\n";
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