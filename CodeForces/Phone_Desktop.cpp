#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        int sum = 0;
        if(b==0){
            sum = (a + 14) / 15;
        }
        else if(b%2==0){
            int boxes = b / 2;
            int sq = boxes * 7;
            sum = boxes;
            if(a>sq){
                int rem = a - sq;
                sum += (rem + 14) / 15;
            }
        }
        else{
            int boxes = (b - 1) / 2;
            int sq = boxes * 7;
            sum = boxes + 1;
            if(a>sq){
                int rem = a - sq-11;
                sum += (rem + 14) / 15;
            }
        }
        cout << sum << endl;
    }
}
