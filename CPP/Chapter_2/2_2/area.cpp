#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double area = (1 / 2.0 )* (x1*(y2 - y3) - x2*(y1 - y3) + x3*(y1 - y2));

    cout << area << "\n";
}