#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define vi vector<int>
#define vl vector<long long>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll low = 1, high = 1e18;
    ll answer = -1;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        ll val = mid - mid / n;
        if (val < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << high+1 << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
