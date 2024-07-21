#include <bits/stdc++.h>
using namespace std;

#define e endl
#define int long long
#define ip(s) int s; cin >> s;
#define ipp(arr, n) int arr[n]; f(n) cin >> arr[i];
#define f(n) for (int i = 0; i < n; i++)

void solve() {
    ip(n);
    ipp(arr, n);
    
    vector<int> b;
    map<int, int> mp, mp2;
    int ans = 0, m = 0;
    
    f(n) {
        ans += arr[i];
        mp[arr[i]]++;
        if (mp[arr[i]] >= 2) m = max(m, arr[i]);
        b.push_back(m);
        ans += m;
        mp2[m]++;
    }
    
    int s = 0, g = 0;
    for (int i = 1; i < b.size(); i++) {
        if (mp2[b[i]] == 1) {
            b[i] = b[i - 1];
            g++;
        }
    }
    
    int sum = 0;
    f(n) sum += b[i];
    
    for (int i = n - 1; i >= 0; i--) {
        if (b[i] == 0) break;
        sum -= b[i];
        ans += sum;
    }
    
    cout << ans << e;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
