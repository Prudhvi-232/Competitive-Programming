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
    int low = 1, high = n;
    int ans = INT_MAX;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int x = ((n + mid - 1) / mid) + mid - 2;
        
        ans = min(ans, x);

        if (x <= ((n + (mid + 1) - 1) / (mid + 1)) + (mid + 1) -2 ) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
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
