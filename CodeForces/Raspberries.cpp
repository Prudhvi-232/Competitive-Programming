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
    int even = 0, odd = 0;
    int mini = INT_MAX;
    int three = 0, one = 0,four=0,two=0;
    fr(n)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            even++;
        else
            odd++;

        if (x % 4 == 3)
        {
            three++;
        }
        if (x % 4 == 1)
        {
            one++;
        }
        if (x % 4 == 0)
        {
            four++;
        }
        if (x % 4 == 2)
        {
            two++;
        }
        x = k - (x % k);
        mini = min(mini, x % k);
    }
    if (k == 4)
    {
        if (even >= 2)
        {
            cout << 0 << endl;
        }
        else if (even == 1)
        {
            if(four>=1){
                cout << 0 << endl;
            }
            else if(three>=1){
                cout << 1 << endl;
            }
            else if(two>=1){
                if(odd>=1){
                    cout << 1 << endl;
                    return;
                }
                cout << 2 << endl;
            }
            else if(one>=2){
                cout << 2 << endl;
            }
            else if(one==1){
                cout << 3 << endl;
            }
        }
        else
        {
            if (three >= 1)
            {
                cout << 1 << endl;
            }
            else if (one == 1)
            {
                cout << 3 << endl;
            }
            else if (one >= 2)
            {
                cout << 2 << endl;
            }
        }
        return;
    }
    cout << mini << endl;
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