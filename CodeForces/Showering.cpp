#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

typedef long long ll;

void solve()
{
    ll n, s, m;
    cin >> n >> s >> m;

    ll l1 = 0;
    ll dis = 0;

    for (ll i = 0; i < n; i++) {
        ll l, r;
        cin >> l >> r;

        if (l1 == 0) {
            dis = max(dis, l);
        } else {
            dis = max(dis, l - l1);
        }
        l1 = r; 
    }
    dis = max(dis, m - l1);
    // cout << dis << endl;

    if (dis >= s) {
        yes;
    } else {
        no;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
