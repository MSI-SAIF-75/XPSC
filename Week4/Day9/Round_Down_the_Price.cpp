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
    cin>>s;
    
    ll n = s.size()-1;
    string sub;
    sub.push_back('1');

    while(n>0){
        sub += '0';
        n--;
    }
    
   int a = stoi(s);
   int b = stoi(sub);

   int subtr = abs(a - b);
   cout<<subtr<<"\n";
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