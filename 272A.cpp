#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    int persons = n + 1;
    int ct = 0;
    for (int i = sum + 1; i <= sum + 5; i++)
    {
        if (i % persons == 1)
            ct++;
    }
    cout << 5 - ct;
}
