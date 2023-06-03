#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int flag = 0;
    for (int i = 1; i <= 1000; i++)
    {
        int multC = i * c;
        if (a <= multC && b >= multC)
        {
            cout << multC << "\n";
            flag = 1;
            break;
        }
    }
    if(!flag) cout<<-1<<"\n";

    return 0;
}