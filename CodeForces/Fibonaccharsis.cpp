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
    ll n, k;
    cin >> n >> k;
    if (k == 1) {
        cout << 1 << endl;
        return;
    } else if (k == 2) {
        if (n % 2 == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
        return;
    }

    ll l = 0, r = 1;
    for (int i = 0; i < k - 2; i++)
    {
        ll temp = l;
        l = r;
        r = temp + r;
        // Check for overflow
        if (r > n) {
            cout << 0 << endl;
            return;
        }
    }

    ll ct = 0;
    for (ll i = 0; l * i <= n; i++)
    {
        ll z = n - l * i;
        if (z % r == 0 && z / r >= i)
        {
            ct++;
        }
    }
    cout << ct << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
