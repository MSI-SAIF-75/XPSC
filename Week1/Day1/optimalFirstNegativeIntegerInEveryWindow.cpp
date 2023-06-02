/*

5 2
-8 2 3 -6 10
output : -8 0 -6 -6

8 3
12 -1 -7 8 -15 30 16 28
output : -1 -1 -7 -15 -15 0

*/

#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[], long long int N,
                                            long long int K)
{
    int i = 0, j = 0;
    queue<long long> q;
    vector<long long> ans;
    while (j < N)
    {
        if (A[j] < 0)
            q.push(A[j]);

        if (j < K - 1)
            j++;
        else
        {
            if (q.empty())
                ans.push_back(0);
            else
                ans.push_back(q.front());

            if (A[i] < 0)
                q.pop();

            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    long long int n, k;
    cin >> n >> k;

    long long int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<long long> ans = printFirstNegativeInteger(arr, n, k);

    for (int i = 0; i < n - k + 1; i++)
    {
        cout << ans[i] << " ";
    }

    // int i = 0, j = 0;
    // queue<int> q;

    // while (j < n)
    // {
    //     if (arr[j] < 0)
    //         q.push(arr[j]); // -8

    //     if (j < k - 1)
    //     {
    //         j++;
    //     }
    //     else
    //     {
    //         cout << q.front() << " ";
    //         if (q.empty())
    //             cout << 0 << " ";
    //         if (arr[i] < 0)
    //             q.pop();
    //         i++;
    //         j++;
    //     }
    // }
    return 0;
}