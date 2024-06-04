#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans=INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            int x;cin>>x;
            int y = abs(x - i);
            if(y>0){
                ans = min(y, ans);
            }
        }
        cout << ans << endl;
    }
}
