#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    string n;
    cin >> n;
    int st = 0;
    int ab = n[n.length() - 1];
    if (ab == '0')
    {
        st = -1;
    }
    for (int i = n.length() - 1; i >= 0; i--)
    {
        if (st == 0)
        {
            cout << n[i];
        }
        else
        {
            if (n[i] != '0')
            {
                cout << n[i];
                st = 0;
            }
        }
    }
    cout << endl;
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