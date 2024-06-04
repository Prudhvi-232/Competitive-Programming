#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, q;
        cin >> n >> q;
        long long a[n];
        long long o = 0;
        long long pre[n];
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            if (x & 1)
            {
                a[i] = 1;
                o++;
            }
            else
            {
                a[i] = 0;
            }
        }
        pre[0] = a[0];
        for (long long i = 1;i<n;i++){
            pre[i] = pre[i - 1] + a[i];
        }
        long long l, r, k;
        while (q--)
        {
            cin >> l >> r >> k;
            long long y = k & 1;
            long long sum;
            if(r>0 && l>1)
                sum = pre[n - 1] - pre[r - 1] + pre[l - 2]+y*(r-l+1);
            else if(r>=1&&l==1)
                sum = pre[n - 1] - pre[r - 1] + y * (r - l + 1);
            else if(l==2&&r>=1)
                sum = pre[n - 1] - pre[r - 1]+pre[0] + y * (r - l + 1);


            if (sum&1ll)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
