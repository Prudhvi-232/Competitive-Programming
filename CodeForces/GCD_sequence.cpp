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
        int b[n];
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            b[i] = __gcd(a[i], a[i + 1]);
            if(b[i-1]>b[i]&&i>=1){
                count++;
            }
        }
        if(count>2){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
}
