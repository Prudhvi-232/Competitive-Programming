#include <bits/stdc++.h>
#define int long long

using namespace std;
void solve()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long maxi=0,temp=a[0];
    long long sum = 0;
    for (int i = 0;i<n;i++){
        long long temp2 = a[0];
        if(temp>a[i]){
            sum += temp - a[i];
            maxi = max(maxi, temp - a[i]);
        }
        else{
            temp = a[i];
        }
    }
    cout << sum + maxi << endl;
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