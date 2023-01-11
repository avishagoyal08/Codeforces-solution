#include <iostream>
using namespace std;

int main()
{
    int a;
    int z = 0, n = 0;
    cin >> a;
    string s;
    cin >> s;
    for (int i = 0; i < a; i++)
    {
        if (s[i] == 'z')
            z++;
        else if (s[i] == 'n')
            n++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << 1 << " ";
    }
    for (int i = 0; i < z; i++)
    {
        cout << 0 << " ";
    }

    return 0;
}