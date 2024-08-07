#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define fr(n) for (long long i = 0; i < n; i++)
#define fv(i, a) for (auto i : a) cout << i << " ";
#define sort(a) sort(a.begin(), a.end());
#define reverse(a) reverse(a.begin(), a.end());
#define mup unordered_map<long long, long long>
#define mp unordered_map<long long, long long>
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    fr(n) cin >> a[i];

    vector<ll> presum(n + 1, 0);
    presum[0] = a[0];
    for (ll i = 1; i < n; i++) presum[i] = presum[i - 1] + a[i];

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        if ((i == 0 && a[0] == 0) || (i == n - 1 && a[n - 1] == 0) || (i > 0 && presum[i] - presum[i - 1] == 0)) {
            ll l = presum[i];
            ll r = presum[n - 1] - presum[i];
            if (l == r) {
                ans += 2;
            } else if (l == r - 1 || r == l - 1) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
