#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, aa;
        cin >> n >> aa >> k;
        int a[n];
        int f;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == aa - 1)
            {
                f = a[i];
            }
        }
        sort(a, a + n, greater<int>());

        if(k==n){
            cout << "YES\n";
        }
        else if (a[k] == f && (k == 0 || a[k - 1] == f))
            {
                cout << "MAYBE\n";
            }
        else if (a[k - 1] <= f || k==0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
