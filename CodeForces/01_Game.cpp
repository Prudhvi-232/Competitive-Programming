#include <bits/stdc++.h>
#define yes cout << "DA" << endl;
#define no cout << "NET" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    string s;cin>>s;
    int o = 0, z = 0;
    fr(s.length()){
        if(s[i]=='0')
            z++;
        else
            o++;
    }
    int dif = ((o + z) - abs(o - z)) / 2;
    if(dif%2==1)
        yes
    else
        no
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