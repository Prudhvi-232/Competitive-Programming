#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    ll len = n * m;
    vector<ll> a(len);
    ll sum = 0;

    fr(len) {
        cin >> a[i];
        if (i == 0) {
            continue;
        } else {
            if ((a[i] - a[0]) % k != 0) {
                cout << -1 << endl;
                return;
            }
        }
        sum += a[i];
    }
    sort(a.begin(), a.end());
    int mmm = len / 2;

    ll median = a[mmm];
    sum = 0;
    for (auto val : a) {
        sum += abs((val - median) / k);
    }

    cout << sum << endl;
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
}
