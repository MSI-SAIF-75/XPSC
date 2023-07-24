#include <bits/stdc++.h>
using namespace std;
#define N 101
int arr[N][N], identiMatrix[N][N];

void mulipleMatrix(int a[][N], int b[][N], int n)
{
    int res[n + 1][n + 1];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < n; k++)
                res[i][j] += a[i][k] * b[k][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            a[i][j] = res[i][j];
    }
}

void power(int a[][N], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                identiMatrix[i][j] = 1;
            else
                identiMatrix[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++)
        mulipleMatrix(identiMatrix, a, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            a[i][j] = identiMatrix[i][j];
    }
}

void printMat(int a[][N], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}

int main()
{
    int t, n, m;
    cin >> n;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];
        }

        power(arr, n, m);
        printMat(arr, n);
    }
    return 0;
}