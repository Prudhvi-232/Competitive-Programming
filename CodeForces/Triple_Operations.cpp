#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

// Function to compute power of 3 with modulo
ll power3(int exp) {
    ll result = 1;
    ll base = 3;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}

void solve() {
    ll l, r;
    cin >> l >> r;

    ll minope = 0;
    ll remp = l;
    while (remp > 0) {
        remp /= 3;
        minope++;
    }

    ll ans = minope*2;
    ll y = power3(minope);
    ll ab = l + 1;

    while (r >= y) {
        ans = (ans + (y - ab) * minope) % MOD;
        ab = y;
        minope++;
        y = power3(minope);
        y = min(y, r + 1);
    }

    if (ab <= r) {
        ans = (ans + (r - ab + 1) * minope) % MOD;
    }

    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
