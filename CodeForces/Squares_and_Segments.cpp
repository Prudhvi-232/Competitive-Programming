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
    int a = floor(sqrt(n));
    if (a * a >= n) {
        a--;
    }
    int b = ceil(sqrt(n));
    int x = b * 2;
    if(n<=pow(b,2)-b){
        cout << x - 1 << endl;
    }
    else{
        cout << x << endl;
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