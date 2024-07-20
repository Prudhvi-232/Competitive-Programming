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
    ll one = 0, zero = 0;
    fr(n)
    {
        ll x;
        cin >> x;
        if (x == 0)
        {
            zero++;
        }
        if (x == 1)
        {
            one++;
        }
    }
    if (one == 0)
    {
        cout << 0 << endl;
    }
    else{
        if(zero==0){
            cout << one<< endl;
        }
        else{
            ll y = pow(2, zero);
            cout << one *y << endl;
        }
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}