
#include <iostream>

using namespace std;

void swapy(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int s, n;
    cin >> s >> n;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    // sort in accordance to x[i]
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                swapy(x[j], x[j + 1]);
                swapy(y[j], y[j + 1]);
            }
        }
    }

    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s <= x[i])
        {
            ans = false;
            break;
        }
        else
            s = s + y[i];
    }
    if (ans == false)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}