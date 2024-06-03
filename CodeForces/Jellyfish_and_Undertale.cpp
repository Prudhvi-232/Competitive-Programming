#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        int n;
        cin >> a >> b >> n;
        long long sum = b;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            if(x>=a){
                sum += (a - 1);
            }
            else{
                sum += x;
            }
        }
        cout << sum << endl;
    }
}
