#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < (1 << n); i++)
    {
        int sums = 0, diff = 0;
        int maxd = 0, mind = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                diff += a[j];
                sums++;
                maxd = max(maxd, a[j]);
                mind = min(mind, a[j]);
            }
        }
        if (sums >= 2 && diff >= l && diff <= r && (maxd - mind)>=x){
            count++;
        }
    }
    cout << count << endl;
}
