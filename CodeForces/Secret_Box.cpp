#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        long long k;
        cin >> k;
        int x1=1, y1=1, z1=1;
        while(x1*y1*z1<k){
            if(x-x1>=y-y1 && x-x1>=z-z1){
                if()
                x++;
            }
            else if(y-y1>=x-x1 && y-y1>=z-z1){
                y++;
            }
            else{
                z++;
            }
        }
    }
}
