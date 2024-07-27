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
    int n;
    cin >> n;
    int a[n];
    fr(n)cin>>a[i];
    for (int i = 1;i<n;i++){
        a[i] = a[i] + a[i - 1];
    }
    int m;
    cin >> m;
    while(m--){
        int aa;
        cin >> aa;
        int low = 0, high = n-1;
        while(low<=high){
            int mid = low + (high - low) / 2;
            if(a[mid]>=aa){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        cout << low+1 << endl;
        // for (int i = 0; i < n;i++){
        //     if(aa<=a[i]){
        //         cout << i + 1 << endl;
        //         break;
        //     }
        // }
    }

    
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}