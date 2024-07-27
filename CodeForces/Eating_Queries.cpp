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
    int n, q;
    cin >> n >> q;
    vl a(n);
    fr(n) cin >> a[i];
    sort(a.begin(), a.end(), greater<ll>());

    vl ab(n + 1);
    ab[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        ab[i] = ab[i - 1] + a[i];
    }
    while (q--)
    {
        int b;
        cin >> b;
        if (b > ab[n - 1])
        {
            cout << -1 << endl;
        }
        else
        {
            int low = 0, high = n - 1,ans=-1;
            while(low<=high){
                int mid = low + (high - low) / 2;
                if(ab[mid]>=b){
                    ans = mid;
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            cout << ans+1 << endl;
        }
    }
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