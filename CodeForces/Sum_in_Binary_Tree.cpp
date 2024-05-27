#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        long long a;cin>>a;
        long long sum = 0;
        while(a>0){
            sum += a;
            a = a / 2;
        }
        cout << sum << endl;
    }
}
