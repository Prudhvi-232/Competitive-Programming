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
    if (n <= 5)
    {
        cout << 0 << endl;
        return;
    }
    if(n%2==1){
        cout<<0<<endl;
        return;
    }
    int x = n / 2;
    int y = (x + 1) / 2;
    cout << y - 1 << endl;
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