#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define vi vector<int>
#define vl vector<long long>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void solve() {
    string s;
    cin >> s;
    int ns = 0, nb = 0, nc = 0;
    int ps = 0, pb = 0, pc = 0;
    int rs = 0, rb = 0, rc = 0;
    fr(s.length()) {
        if (s[i] == 'B')
            rb++;
        else if (s[i] == 'C')
            rc++;
        else
            rs++;
    }

    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    ll money;
    cin >> money;

    ll l = 0, r = money + 100;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        ll z = 0;
        ll r1 = max(rb * mid - nb, z);
        ll r2 = max(rs * mid - ns, z);
        ll r3 = max(rc * mid - nc, z);
        ll price = r1 * pb + r2 * ps + r3 * pc;
        if (price <= money)
            l = mid + 1;
        else
            r = mid - 1;
    }

    cout << r << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
