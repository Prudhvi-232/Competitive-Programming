#include <bits/stdc++.h>
#define int long long

using namespace std;
void solve()
{
    long long n, k;
    cin >> n >> k;
    long long x = k * (n - 1);
    cout << x + 1 << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}