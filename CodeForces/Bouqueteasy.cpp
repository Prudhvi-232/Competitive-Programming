#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<int> a(n);
    fr(n) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());

    int l = 0, r = 0;
    ll sum = 0, maxsum = 0;

    while (r < n) {
        if (sum + a[r] <= m && (a[l] - a[r] <= 1 || l == r)) {
            sum += a[r];
            maxsum = max(sum, maxsum);
            r++;
        } else {
            sum -= a[l];
            l++;
            if (l > r) {
                r = l;
                sum = 0;
            }
        }
    }
    cout << maxsum << endl;
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
