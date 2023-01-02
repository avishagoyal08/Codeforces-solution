// ahhellllloou

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int a = 0, i, cnt = 0;
    string str = "hello";
    for (i = 0; i < 5; i++)
    {
        for (int j = a; j < s.length(); j++)
        {
            a = j + 1;
            if (str[i] == s[j])
            {
                cnt++;
                break;
            }
        }
    }
    if (i == 5 && cnt == 5)
        cout << "YES" << endl;
    else
        cout << "NO";

    return 0;
}