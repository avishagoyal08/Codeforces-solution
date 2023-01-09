
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int l = s[i].length();
        for (int j = 0; j < l; j++)
        {
            if (s[i][j] == '+')
            {
                ans++;
                break;
            }
            else if (s[i][j] == '-')
            {
                ans--;
                break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}