
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> ma;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        ma.push_back({i + 1, a});
    }

    int ans = ma.size();
    for (int i = 0; i < ma.size(); i++)
    {
        if (ma[i].second > m)
        {
            ma.push_back({ma[i].first, ma[i].second - m});
            ans = ma[i].first;
        }
    }

    cout << ans << endl;

    return 0;
}