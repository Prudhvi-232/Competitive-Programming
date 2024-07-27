#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define vl vector<long long>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    vl a(n);
    fr (n)
        cin >> a[i];
    ll low = 0, high = 1e10;
    ll ans = 0;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        ll tot = 0;
        for (ll i = 0; i < n; i++)
        {
            if(a[i] < mid){
                tot += mid - a[i];
            }
        }
        if(tot <= x){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
