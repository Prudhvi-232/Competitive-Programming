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
        int tf = 100000000;
        int ts = 100000000;
        int tt = 100000000;
        for (int i = 0; i < n; i++)
        {
            int a, x;
            cin >> a >> x;
            if (x==10){
                tf = min(tf, a);
            }
            if(x==01){
                ts = min(ts, a);
            }
            if(x==11){
                tt = min(tt, min(tf + ts, a));
            }
        }
        int final = min(tt, ts + tf);
        if(final<100000000)cout << final << endl;
        else
            cout << -1 << endl;
    }
}
