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
        vector<int> a(n);
        vector<long long> sum(n + 1, 0);
        int x=0;
        sum[0] = 0;
        int xx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum[i + 1] = sum[i] + a[i];
            xx = max(xx, a[i]);
            if(sum[i+1]-xx==xx){
                x++;
            }
        }
        cout << x << endl;
    }
}
