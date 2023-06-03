#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;

    double percentage = (((a - b) / a) * 100);
        cout << percentage << "\n";
    return 0;
}