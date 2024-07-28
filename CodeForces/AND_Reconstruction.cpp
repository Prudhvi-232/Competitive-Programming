#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define vi vector<int>
#define vl vector<long long>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n-1];
    fr(n-1) cin >> a[i];
    int b[n];
    b[0] = a[0];
    b[n - 1] = a[n - 2];
    
    for (int i = 1; i < n - 1; i++) {
        b[i] = a[i - 1] | a[i];
    }
    for(int i=0;i<n-1;i++){
        if((b[i] & b[i+1]) != a[i]){
            cout << -1 << endl;
            return;
        }
    }
    fr(n) {
        cout << b[i] << " ";
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
