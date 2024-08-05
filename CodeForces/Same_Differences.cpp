#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define vi vector<int>
#define vl vector<long long>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vl a(n + 1);
    fr(n) {
        cin >> a[i];
    }
    fr(n) {
        a[i] = a[i] - i;
    }
    unordered_map<ll, ll> frequency;

    for (ll i = 0; i < n; ++i) {
        frequency[a[i]]++;
    }
    ll ans = 0;
    for (const auto &pair : frequency) {
        ans = ans + (pair.second * (pair.second - 1)) / 2;
    }
    cout << ans << endl;
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
