#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }

    ll magcd = abs(a - b);
    ll rem = min(a % magcd, magcd - (a % magcd));
    cout << magcd << " " << rem << endl;
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
