#include <bits/stdc++.h>
#include <string>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    string n;
    cin >> n;
    int one = 0, zero = 0;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '1')
        {
            one++;
        }
        else
        {
            zero++;
        }
    }
    if (one == zero)
    {
        cout << 0 << endl;
    }
    else{
        for (int i = 0; i < n.length();i++){
            if (n[i] == '1'){
                if(zero==0){
                    int x = n.length();
                    cout << x - i << endl;
                }
                zero--;
            }
            else{
                if(one==0){
                    int x = n.length();
                    cout << x - i << endl;                    
                }
                one--;            
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