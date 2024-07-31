#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define vi vector<int>
#define vl vector<long long>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vi a(n + 1), pre(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pre[i] = pre[i - 1] + a[i];
    }
    int ans = 1;
    int low = 1, high = n;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        cout << "? " << mid - low + 1 << " ";
        for (int i = low; i <= mid; i++) {
            cout << i << " ";
        }
        cout << endl;
        cout << endl;
        int x;
        cin >> x;
        int sum = pre[mid] - pre[low - 1];
        if (x > sum) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << "! " << ans << endl;
    cout << endl;
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
