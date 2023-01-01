#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum - a[i] + b[i];
        v.push_back(sum);
    }
    cout << *max_element(v.begin(), v.end());
}