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
    ll n; cin>>n;
 
    ll l=1,h=1e10,ans=1;

    while(l<=h){
        ll mid=(l+h)/2;
         
        ll k=(mid*(mid-1)/2);
 
        if(k<=n) ans=max(ans,mid),l=mid+1;
        else h=mid-1;
    }
        
    ll k=ans*(ans-1)/2;
    cout<<ans+(n-k)<<endl;
    
} 

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
