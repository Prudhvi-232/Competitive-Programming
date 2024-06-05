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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int f = a[0], l = a[n - 1];
        int sum,sum1,final,final1=0;
        for (int i = 1; i < n;i++){
            int x = abs(a[i] - a[i - 1]);
            final1 = max(x, final1);
        }
        sort(a, a + n);
        sum = max(abs(f - a[0]), abs(f-a[n-1]));
        sum1 = max(abs(l - a[0]), abs(l-a[n - 1]));
        final = max(sum, sum1);
        final = max(final, final1);
        cout << final << endl;
    }
}
