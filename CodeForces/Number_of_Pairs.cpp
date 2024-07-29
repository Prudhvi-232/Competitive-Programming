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
    ll n, l, r;
    cin >> n >> l >> r;
    vl a(n);
    fr(n) cin >> a[i];
    sort(a.begin(), a.end());
    ll ct = 0;

    for (ll i = 0; i < n; i++) {
        ll le = l - a[i];
        ll ri = r - a[i];

        auto lower = lower_bound(a.begin() + i + 1, a.end(), le);
        auto upper = upper_bound(a.begin() + i + 1, a.end(), ri);

        ll dis = distance(lower, upper);
        ct += dis;
    }
    cout << ct << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
