#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
            int sn;
            cin >> sn;
            while (sn--)
            {
                char st;
                cin >> st;

                if (st == 'D')
                {
                    arr[i]++;
                    if (arr[i] == 10)
                        arr[i] = 0;
                }
                else
                {
                    arr[i]--;
                    if (arr[i] == -1)
                        arr[i] = 9;
                }
            }
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}