#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int t;
void doWork()
{
    int n;
    cin >> n;
    vector<int> input(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> input[i];
        
    int N = 101, count;
    int arr[N];

    for (int i = 1; i <= N; i++)
        arr[i] = 0;
    for (int i = 1; i <= n; i++)
        arr[input[i]]++;

    int index;

    for (int i = 1; i <= n; i++)
    {
        if (arr[input[i]] == 1)
        {
            index = i;
            break;
        }
    }
    cout << index << "\n";
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