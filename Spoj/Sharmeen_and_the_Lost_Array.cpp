#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    fr(n-1) cin >> a[i];
    int x = 1;
    cout << 1 << " ";
    for (int i = 0; i < n-1; i++){
        if(a[i]==0){
            cout << x << " ";
        }
        else if(a[i]==1){
            x++;
            cout << x << " ";
        }
        else{
            x--;
            cout << x << " ";
        }
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