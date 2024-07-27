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
    ll n, l;
    cin >> n >> l;
    vi a(n);

    fr(n) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    double maxGap = 0;
    fr(n-1) {
        maxGap = max(maxGap, (double)(a[i+1] - a[i]));
    }

    double leftGap = a[0] - 0;
    double rightGap = l - a[n-1];

    double result = max({maxGap / 2.0, leftGap, rightGap});
    cout << fixed << setprecision(10) << result << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
