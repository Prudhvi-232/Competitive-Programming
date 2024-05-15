#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
        {
            int a, b, n; 
            cin >> a >> b >> n;
            int c = min(a, b);
            int d = max(a, b);
            int sum=0;
            int i = 0;
            while (sum <= n) {
                if(i%2==0)
                {
                    c = c + d;
                    sum = c;
                }
                else
                {
                    d = d + c;
                    sum = d;
                }
                i++;
            }
            cout << i<<endl;
            
        }
}
