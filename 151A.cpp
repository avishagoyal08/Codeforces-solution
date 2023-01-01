// n friends - k bottles of soft drinks - each bottle l ml    c - limes d - slices p gm salt
// nl ml of drink   a lime   np gm salt
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x = (k * l) / (nl * n);
    int y = (c * d) / n;
    int z = p / (np * n);
    int final = min(x, y);
    int ans = min(final, z);
    cout << ans;

    return 0;
}