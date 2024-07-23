#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    ll n, m;
    cin >> n >> m;
    int aa[n];
    fr(n)
    {
        cin >> aa[i];
    }
    int bb[n];
    fr(n)
    {
        cin >> bb[i];
    }
    map<int, int> a;
    for (n)
    {
        a[aa[i]] = bb[i];
    }
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++) {
        a.emplace_back(aa[i], bb[i]);
    }
    sort(a.begin(), a.end(), [](const pair<int, int>& lhs, const pair<int, int>& rhs) {
        return lhs.first > rhs.first;
    });

    ll sum = 0;
    ll maxsum = 0;
    fr(n-1){
        sum = (aa[i] * bb[i])+(aa[i+1]*bb[i+1]);
        if(sum<=m){
            maxsum = max(sum, maxsum);
        }
        else{
            
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