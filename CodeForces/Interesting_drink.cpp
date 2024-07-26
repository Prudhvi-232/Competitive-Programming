#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    fr(n) cin >> a[i];
    ll q;
    cin >> q;
    vector<ll> b(q);
    fr(q) cin >> b[i];
    sort(a.begin(), a.end());

    fr(q) {
        ll target = b[i];
        ll low = 0, high = n;

        // Binary search to find the number of elements <= target
        while (low < high) {
            ll mid =(high + low) / 2;
            if (a[mid] <= target)
                low = mid + 1;
            else
                high = mid;
        }

        // Output the count of elements <= target
        cout << low << endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
