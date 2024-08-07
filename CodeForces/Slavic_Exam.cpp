#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (j < m && (s[i] == t[j] || s[i] == '?'))
        {
            if(s[i]=='?'){
                s[i] = t[j];
            }
            j++;
        }
        
    }
    for (int i=0; i < n;i++)
    {
        if(s[i]=='?'){
            s[i] = 'a';
        }
    }

    if (j == m)
    {       
        cout << "YES\n"
             << s << "\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
