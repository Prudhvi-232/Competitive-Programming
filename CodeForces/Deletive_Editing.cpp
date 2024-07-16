#include <bits/stdc++.h>
#define int long long
// #define e endl;
// #define yes cout<<"YES\n"<<endl;
// #define no cout<<"NO\n"<<endl;

using namespace std;
void solve()
{
    string a, b;
    cin >> a >> b;
    int len = a.length();
    int k=0;
    int len2 = b.length();
    int flag = 0;
    for (int i = 0; i < len2;i++){
        flag = 0;
        for (int j = k; j < len;j++){
            if (a[j] == b[i])
            {
                flag = 1;
                k = j;
                break;
            }
        }
        if(flag==0){
            cout << "NO" << endl;
            return;
        }
        if(k==len){
            break;
        }
    }
    cout << "YES" << endl;
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