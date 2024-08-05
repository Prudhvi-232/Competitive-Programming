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
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int x = 0;
    fr(n){
        if(a[n-i-1] != b[n-i-1]){
            x++;
            if(a[0]==b[n-i-1]){
                cout << 1 << " " << n - i<<" ";
            }
            else{
                cout << n - i << " ";
            }
        }
    }
    cout <<" "<< endl;
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