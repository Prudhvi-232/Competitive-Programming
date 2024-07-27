#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define vl vector<long long>
#define fr(n) for (int i = 1; i <= n; i++)
typedef long long ll;
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vl a(n + 1), ro(n + 1, 0);
    fr(n) cin >> a[i];

    if (a[1] != n) {
        no;
        return;
    }

    for (int i = 1; i <= n; i++) {
        ro[a[i]]++;
    }

    for (int i = n - 1; i >= 1; i--) {
        ro[i] += ro[i + 1];
    }

    bool flag = true;
    for (int i = 1; i <= n; i++) {
        if (ro[i] != a[i]) {
            flag = false;
            break;
        }
    }

    if (flag) {
        yes;
    } else {
        no;
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
