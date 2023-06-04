#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    long long int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    reverse(arr, arr + n);

    long long int sum = 0;

    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
            break;
        sum += arr[i];
    }

    cout << sum << "\n";
    return 0;
}