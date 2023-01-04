#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float x = a / (c * 1.0);
    float b1 = sqrt(b / (x * 1.0));
    float l1 = c / (b1 * 1.0);
    float b2 = a / (l1 * 1.0);
    float ans = b1 * 4 + l1 * 4 + b2 * 4;
    cout << ans;
    return 0;
}