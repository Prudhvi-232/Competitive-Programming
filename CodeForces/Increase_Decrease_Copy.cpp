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
        int flag = 0;
        vector<int> a(n), b(n+1);
        int x;
        int sum = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            sum += abs(a[i] - b[i]);
        }
        cin >> b[n];
        x = b[n];
        int z = a[0];
        for (int i = 0; i < n;i++){
            int y;
            if(a[i]>b[i]){
                if(x>=b[i]&&x<=a[i]){
                    flag = 1;
                    break;
                }
                else if(x>=a[i]){
                    z = max(b[i], z);
                }
                else if(x<=b[i]){
                    z = min(z, b[i]);
                }
            }
            else if(a[i]<b[i]){
                if(x>=a[i] && x<=b[i]){
                    flag = 1;
                    break;
                }
                else if(x>=b[i]){
                    z = max(z, b[i]);
                }
                else if(x<=a[i]){
                    z = min(z, a[i]);
                }

            }
            else if(a[i]==b[i]){
                if(x>a[i]){
                    z = max(z, a[i]);
                }
                else if(x<a[i]){
                    z = min(z, a[i]);
                }
                else if(x==a[i]){
                    z = x;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag)
            cout << sum << endl;
        else
            cout << sum + abs(z - b[n]) << endl;
    }
}
