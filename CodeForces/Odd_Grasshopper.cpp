#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    ll ind, n;
    cin >> ind >> n;
    if(ind%2==0){
        if(n%4==1){
            cout << ind-n << endl;
        }
        if(n%4==2){
            cout << ind+1 << endl;
        }
        if(n%4==3){
            cout << ind+n+1 << endl;
        }
        if(n%4==0){
            cout << ind+0 << endl;
        }
    }
    else{
        if(n%4==1){
            cout << ind+n << endl;
        }
        if(n%4==2){
            cout << ind-1 << endl;
        }
        if(n%4==3){
            cout << ind-n-1 << endl;
        }
        if(n%4==0){
            cout << ind+0 << endl;
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