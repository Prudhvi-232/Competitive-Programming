#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;

using namespace std;
void solve()
{
    int a, b, c;cin>>a>>b>>c;
    if(b-a==c-b){
        yes return;
    }
    else{
        if(a<b && a<c){
            if(b>c){
                int d = b - c;
                if(d%a==0){
                    yes
                }
                else{
                    no
                }
            }
            if(b<c){
                int d = c-b;
                if(d%a==0){
                    yes
                }
                else{
                    no
                }
            }
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