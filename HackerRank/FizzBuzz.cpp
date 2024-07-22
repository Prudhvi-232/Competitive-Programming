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
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            cout << "Fizz";
        }
        if (i % 5 == 0)
        {
            cout << "Buzz";
        }
        if (i % 3 != 0 && i % 5 != 0)
        {
            cout << i;
        }
        cout << endl;
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