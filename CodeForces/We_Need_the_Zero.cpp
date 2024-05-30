#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x ;
        cin >> x;
        for (int i = 0; i < n-1;i++){
            int a;
            cin >> a;
            x = x ^ a;
        }
        if(n&1){cout << x << endl;}
        else {
            if(x)
                cout << -1 << endl;
            else
                cout << x << endl;
        }
    }
}
