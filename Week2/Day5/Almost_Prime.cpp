/*
21
21
4 6 8 10 12 14 16 18 20 
6 9 12 15 18 21 
10 15 20 
14 21 


4 = 1
6 = 1 + 1 = 2
8 = 1
10 = 1 + 1 = 2
12 = 1 + 1 = 2
14 = 1 + 1 = 2
16 = 1
18 = 1 + 1 = 2
20 = 1 + 1 = 2
9 = 1
15 = 1 + 1 = 2
21 = 1 + 1 = 2
 
 
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, amount = 0;
    cin >> n;

    bool flag[3001] = {false};
    int factors[3001] = {0};

    for (int i = 2; i <= n; i++)
    {
        if (flag[i] == false)
        {
            for (int j = i + i; j <= n; j += i)
            {
                flag[j] = true;
                factors[j]++;
                cout<<j<<" ";
            }
            cout<<"\n";
        }

        if (factors[i] == 2)
            amount++;
    }
    cout << amount << "\n";
    return 0;
}