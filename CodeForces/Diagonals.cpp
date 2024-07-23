#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int sum = 0;
    if (k == 0)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        for (int i = n; i > 0;i--){
            if(i==n){
                k = k - i;
                sum++;
            }
            else{
                if(k>i){
                k = k - 2*i;
                sum = sum + 2;
                }
                else{
                    k = k - i;
                    sum++;
                }
            }
            if(k<=0){
                cout << sum << endl;
                return;
            }
        }
    }
    cout << sum << endl;
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