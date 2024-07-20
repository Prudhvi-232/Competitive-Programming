#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int delforzero = -1;
    int delforfive = -1;
    int cz = -2, cf = -2;
    int len = s.length();
    for (int i = len - 1; i >= 0;i--){
        cz++;
        if(s[i]=='0'){
            delforzero = i;
            break;
        }
    }
    for (int i = len - 1; i >= 0;i--){
        cf++;
        if(s[i]=='5'){
            delforfive = i;
            break;
        }
    }
    for (int i = delforzero-1; i >= 0;i--){
        cz++;
        if(s[i]=='0'||s[i]=='5'){
            break;
        }
    }
    for (int i = delforfive-1; i >= 0;i--){
        cf++;
        if(s[i]=='2'||s[i]=='7'){
            break;
        }
    }
    if(min(cf,cz)!=-1)cout << min(cf,cz) << endl;
    else
        cout << len << endl;
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