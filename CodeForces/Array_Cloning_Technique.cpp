#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;

using namespace std;
void solve()
{
    int n;
    cin >> n;
    vi a(n + 1);
    unordered_map<int, int> mp;
    fr(n)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int maxelement = 0;
    for (auto x : mp)
    {
        maxelement = max(maxelement, x.second);
    }
    int ct = 0;
    if (maxelement == n)
    {
        cout << 0 << endl;
    }
    else
    {
        int repe = maxelement;
        int m = n - maxelement;
        while (repe < n)
        {
            ct = ct + 1 + min(repe, m);
            m = m - repe;
            repe = repe * 2;
            if (m < 0)
            {
                break;
            }
        }
        cout << ct << endl;
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}