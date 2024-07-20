#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
// #define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vi a(n * k + 1);
    ll sum = 0;
    for (int i = 0; i < k * n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ind = n*k;
    for (int i = k; i > 0; i--)
    {
        for (int j = (n/2); j >= 0;j--){
            if(j==0){
                sum += a[ind];
                // cout << a[ind] << " ";
            }
            ind--;
        }
    }
    cout << sum << endl;
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