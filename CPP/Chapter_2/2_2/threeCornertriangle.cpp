#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double A = pow(a, 2);
    double B = pow(b, 2);
    double C = pow(c, 2);

    double coseA = (B + C - A) / (2 * b * c);
    double coseB = (A + C - B) / (2 * a * c);
    double coseC = (A + B - C) / (2 * a * b);
    cout << coseA << " " << coseB << " " << coseC << "\n";
    return 0;
}