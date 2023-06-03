#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int A = pow(a, 2), B = pow(b, 2), C = pow(c, 2);

    if (A + B < C)
        cout << "Yes"
             << "\n";
    else
        cout << "No"
             << "\n";

    return 0;
}