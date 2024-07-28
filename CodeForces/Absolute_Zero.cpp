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
    vi a(n);
    fr(n)cin>>a[i];
    int k=40;
    int alz = 0;
    fr(n){
        if(a[i]!=0){
            alz = 1;
        }
    }
    if(alz==0){
        cout << 0 << endl;
        cout << endl;
        return;
    }
    int med = 0,ct=0;
    vi v;
    while(k--){
        int maxi = *max_element(a.begin(),a.end());
        int mini = *min_element(a.begin(), a.end());
        if((maxi+mini)%2!=0){
            cout << -1 << endl;
            return;
        }
        med = (maxi + mini) / 2;
        v.push_back(med);
        if(med==0){
            v.pop_back();
            break;
        }
        for (int i = 0; i < n;i++){
            a[i] = abs(a[i] - med);
        }
        ct++;
    }
    cout << ct << endl;
    for(auto i :v){
        cout << i << " ";
    }
    cout << endl;
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