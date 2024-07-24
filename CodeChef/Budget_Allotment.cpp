#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    vi a(n);
    int len = 0;
    int extra = 0,ct=0;
    fr(n){
        int aa;cin>>aa;
        if(aa>x){
            extra += aa - x;
            ct++;
        }
        else if(aa<x){
            a.push_back(aa);
            len++;
        }
        else{
            ct++;
        }
    }
    sort(a.begin(), a.end(),greater<int>());
    for(auto it:a){
        if(extra>0){
            extra = extra - (x - it);
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
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}