#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    if (s[0]!='9' && s[0]>='5'){
        s[0] = '9' -(s[0]-'0');
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i]>='5'){
            s[i] = '9' - (s[i] - '0');
        }
    }
    cout << s << endl;
}
