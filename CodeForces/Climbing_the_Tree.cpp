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
    int q;
    cin >> q;

    ll L = 1LL, R = (ll)1e18;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            ll a, b, n;
            cin >> a >> b >> n;

            ll l, r;
            if (n == 1)
            {
                l = 1LL;
                r = a;
            }
            else
            {
                l = ((n - 2LL) * (a - b)) + a + 1LL;
                r = ((n - 1LL) * (a - b)) + a;
            }

            if (r < L || l > R)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << 1 << " ";
                L = max(L, l);
                R = min(R, r);
            }
        }
        else
        {
            ll a, b;
            cin >> a >> b;

            ll l = L - a;
            ll r = R - a;
            ll n1 = (l + (a - b) - 1LL) / (a - b);
            ll n2 = (r + (a - b) - 1LL) / (a - b);

            if (R <= a)
            {
                cout << 1 << " ";
            }
            else if (n1 == n2)
            {
                cout << n1 + 1 << " ";
            }
            else
            {
                cout << -1 << " ";
            }
        }
    }
    cout << endl;
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
