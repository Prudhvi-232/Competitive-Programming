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
            int x = a[i - 1]-a[i];
            final1 = max(x, final1);
        }
        sort(a, a + n);
        sum =  a[n-1]-f;
        sum1 = l-a[0];
        final = max(sum, sum1);
        final = max(final, final1);
        cout << final << endl;
    }
}