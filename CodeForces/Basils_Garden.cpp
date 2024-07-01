#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long ans=a[n-1];
   
    for(int i=n-2;i>=0;i--){
       if(ans>=a[i]){
        ans+=1;
       
       }
       else{
        ans=a[i];
       }
       
       
    }
    cout<<ans<<endl;
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
