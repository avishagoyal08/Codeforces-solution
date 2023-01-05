#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int v[m];
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    vector<int> ans;
    sort(v, v + m);
    for (int i = 0; i < (m - n + 1); i++)
    {
        int a = v[i + n - 1] - v[i];
        ans.push_back(a);
    }

    cout << (*min_element(ans.begin(), ans.end()));
    return 0;
}