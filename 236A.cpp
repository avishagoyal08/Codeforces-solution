#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<char> se;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        se.insert(s[i]);
    }
    int len = se.size();
    if (len % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}