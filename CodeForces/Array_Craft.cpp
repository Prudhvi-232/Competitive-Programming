#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vi a(n + 1, 1);
    int flag = 0;
    for (int i = x; i < n; i++)
    {
        if(flag==0){
            a[i] = -1;
            flag = flag ^ 1;
        }
        else{
            a[i] = 1;
            flag = flag ^ 1;
        }
    }
    flag = 0;
    for (int i = y - 2; i >= 0;i--){
        if(flag==0){
            a[i] = -1;
            flag = flag ^ 1;
        }
        else{
            a[i] = 1;
            flag = flag ^ 1;
        }
    }
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
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