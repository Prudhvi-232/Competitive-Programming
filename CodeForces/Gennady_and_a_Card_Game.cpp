#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int first = 0, second = 0;
    vector<string> a;
    for (int i = 0; i < 5; i++)
    {
        string aa;
        cin >> aa;
        a.push_back(aa);
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i][0] == s[0])
        {
            first = 1;
        }
        if (a[i][1] == s[1])
        {
            second = 1;
        }
    }
    if (first == 1 || second == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
