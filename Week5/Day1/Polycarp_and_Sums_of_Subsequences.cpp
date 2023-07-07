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
    int n = 7;
    vector<int>arr(n);
    for(int i = 0; i<n; i++)cin>>arr[i];

    int a1 = arr[0];
    int a2 = arr[1];
    int a3;
    if(a1+a2!=arr[2]) a3 = arr[2];
    else a3 = arr[3];

    cout<<a1<<" "<<a2<<" "<<a3<<"\n";

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