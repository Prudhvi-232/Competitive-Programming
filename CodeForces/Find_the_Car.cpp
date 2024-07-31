#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define vl vector<long long>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vl a(k), b(k);
    fr(k) cin >> a[i];
    fr(k) cin >> b[i];
    vl ans(n + 1);
    for (int i = 0; i < k; i++)
    {
        if (i != 0)
            int dis = a[i] - a[i - 1];
        if (i == 0)
        {
            for (int j = 0; j <= a[i]; j++)
            {
            }
        }
        else
        {
            for (int j = a[i - 1] + 1; i <= a[i]; i++)
        }
    }
}
while (q--)
{
    int x;
    cin >> x;
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