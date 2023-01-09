
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int a[4];
    for (int i = 0; i < 4; i++)
        cin >> a[i];

    map<int, int> m;
    for (int i = 0; i < 4; i++)
    {
        m[a[i]]++;
    }
    int ans = 0;
    for (auto it : m)
    {
        ans++;
    }

    if (ans == 1)
        cout << 3;
    else if (ans == 2)
        cout << 2;
    else if (ans == 3)
        cout << 1;
    else if (ans == 4)
        cout << 0;

    return 0;
}