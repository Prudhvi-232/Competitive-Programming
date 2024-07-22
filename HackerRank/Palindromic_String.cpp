#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    fr((n) / 2)
    {
        if (s[i] != s[n - i - 1])
        {
            no return;
        }
    }
    yes 
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}