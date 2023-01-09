
#include <iostream>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        m[s]++;
    }

    int maxi = INT_MIN;
    string ans;
    for (auto it : m)
    {
        if (maxi < it.second)
        {
            maxi = it.second;
            ans = it.first;
        }
    }
    cout << ans << endl;

    return 0;
}