#include <bits/stdc++.h>
#define int long long
// #define e endl;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

using namespace std;
void solve()
{
    string a, b;
    cin >> a >> b;
    int len = a.length();
    int k=len-1;
    int len2 = b.length();
    for (int i = len2-1; i >=0 ;i--){
        int flag = 0;
        for (int j = len-1; j >= 0;j--){
            if (a[j] == b[i]&&j>k)
            {
                no
                return ;
            }
            else if(a[j] == b[i]){
                a[j] = '0';
                k = j;
                flag = 1;
                break;
            }
        }
        if(flag==0){
            no return;
        }
    }
    yes
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