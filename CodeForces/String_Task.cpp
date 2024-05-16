#include <bits/stdc++.h>
using namespace std;
string lower(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}

int main()
{
    string s;
    cin >> s;
    string ss = lower(s);
    string sss;
    for (int i = 0; i < ss.length(); i++)
    {
        if (ss[i] == 'a' || ss[i] == 'e' || ss[i] == 'i' || ss[i] == 'o' || ss[i] == 'u' || ss[i] == 'y')
        {
        }
        else
        {
            sss.push_back('.');
            sss.push_back(ss[i]);
        }
    }
    cout << sss;
}
