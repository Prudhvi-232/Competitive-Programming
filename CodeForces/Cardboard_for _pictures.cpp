#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

ll sq(const vector<int>& a, int n, ll w) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        ll term = static_cast<ll> (a[i]) + w;
        if (sum >__LONG_LONG_MAX__ - (term * term)) {
            return LLONG_MAX; // Prevent overflow
        }
        sum += (term) * (term);
    }
    return sum;
}

void solve() {
    ll n, c;
    cin >> n >> c;
    vi a(n);
    fr(n) cin >> a[i];

    ll low = 0, high = 1e9, k = 0;
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (sq(a, n, mid) <= c) {
            k = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << k/2 << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
