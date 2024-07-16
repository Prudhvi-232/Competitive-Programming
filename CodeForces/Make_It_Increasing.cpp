#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long ct = 0;
    int flag = 1;
    for (int i = n - 1; i > 0; i--)
    {
        if(a[i]==0){
            flag = 0;
            break;
        }
        while (a[i - 1] >= a[i])
        {
            a[i - 1] = a[i - 1] /2;
            ct++;
            if (a[i - 1] == 0 && i != 1)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0 && i != 1)
        {
            break;
        }
    }
    if (flag)
        cout << ct << endl;
    else
        cout << -1 << endl;
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