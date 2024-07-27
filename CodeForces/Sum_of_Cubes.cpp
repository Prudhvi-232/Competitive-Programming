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
    ll x;
    cin >> x;
    long long  cbrt = static_cast<long long >(floor(pow(x, 1.0 / 3.0)));
    for (long long  i = 1; i <= cbrt;i++){
        ll low = 1,high=cbrt;
        while(low<=high){
            ll mid = low + (high - low) / 2;
            if (mid*mid*mid==x-i*i*i){
                yes;
                return;
            }
            else if(mid*mid*mid>x-i*i*i){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
    }
    no return;
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