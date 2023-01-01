
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
    }
    int small = v[0];
    int ans = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (small > v[i])
        {
            small = v[i];
            ans = i + 1;
        }
    }
    int freq = count(v.begin(), v.end(), small);
    if (freq == 1)
        cout << ans;
    else
        cout << "Still Rozdil";

    return 0;
}