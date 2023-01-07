
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int timer(int x[], int y[], int n)
{
    int i;
    int sumx = 0, sumy = 0;
    bool ans = false;
    for (i = 0; i < n; i++)
    {
        sumx = sumx + x[i];
        sumy = sumy + y[i];
        if ((x[i] + y[i]) % 2 == 1)
            ans = true;
    }
    if (sumx % 2 == 0 && sumy % 2 == 0)
    {
        return 0;
    }
    else if (sumx % 2 != 0 && sumy % 2 != 0 && ans == true)
    {
        return 1;
    }
    else
        return -1;
}

int main()
{
    int n;
    cin >> n;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    int a = timer(x, y, n);
    cout << a << endl;

    return 0;
}