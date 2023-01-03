
#include <iostream>

using namespace std;

int main()
{
    int n, a, t0 = 0, t5 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 0)
            t0++;
        else
            t5++;
    }
    if (t0 == 0)
        cout << -1;
    else if (t5 < 9)
        cout << 0;
    else
    {
        int x = t5 % 9;
        t5 = t5 - x;
        for (int i = 0; i < t5; i++)
            cout << "5";

        for (int i = 0; i < t0; i++)
            cout << "0";
    }

    return 0;
}