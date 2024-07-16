#include <bits/stdc++.h>
#define int long long

using namespace std;
void solve()
{
    int n;
    cin >> n;
    long long mini = 0, maxi = 0;
    int flag=0;
    if(n<4){
        flag = 1;
    }
    if(n%2==0){
        if(n%4==0 || n%4==2){
            maxi = n / 4;
        }
        if(n%6==0 || n%6==4 || n%6==2){
            mini = (n+5) / 6;
        }
    }
    else{
        flag = 1;
    }
    if(flag)
        cout << -1 << endl;
    else cout << mini << " " << maxi << endl;
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