#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        sum = sum + a[i] + b[i] + c[i];
        if (sum >= 2)
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}