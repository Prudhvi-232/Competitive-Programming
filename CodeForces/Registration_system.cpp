#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
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
    unordered_map<string,int> mp;
    fr(n){
        string s;
        cin >> s;
        if(mp[s] == 0){
            cout << "OK" << endl;
            mp[s]++;
        }
        else{
            string ans = s+to_string(mp[s]);
            cout << ans << endl;
            mp[s]++;
        }
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