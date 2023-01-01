
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[7];
    for (int i = 0; i < 7; i++)
        cin >> a[i];
    int sum = 0;
    int ans;
    int i = 0;
    while (true)
    {
        sum = sum + a[i];
        if (sum >= n)
        {
            ans = i + 1;
            break;
        }
        i++;
        if (i > 6)
        {
            i = 0;
        }
    }
    cout << ans << endl;

    return 0;
}