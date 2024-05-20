#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long x=0,sum=0;
        int i = 0;
        while(x<n){
            x = pow(2, i);
            if(x>n){
                break;
            }
            sum += x;
            i++;
        }
        long long sum2 = (n * (n + 1)) / 2;
        cout << sum2 - (2*sum) << endl;
    }
}
