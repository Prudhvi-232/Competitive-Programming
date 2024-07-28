#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define vi vector<int>
#define vl vector<long long>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    ll tofind = 0;
    vi a(n + 1);
    fr(n) {
        cin >> a[i];
        if (i == k - 1) {
            tofind = a[i];
        }
    }
    vl pre(n + 1);
    pre[0] = a[0];
    for (ll i = 1; i < n; i++) {
        if (a[i] <= pre[i - 1]) {
            pre[i] = pre[i - 1];
        } else {
            pre[i] = a[i];
        }
    }

    for (int i = 0;i<n;i++){
        if(pre[i]>tofind){
            if(pre[i-1]==tofind&&i>=1){
                cout << i - 1 << endl;
                return;
            }
            cout << i << endl;
            return;
        }
    }
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
