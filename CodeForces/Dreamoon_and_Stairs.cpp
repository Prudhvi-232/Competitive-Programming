#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    int flag = 0;
    count = (a + 1) / 2;
    if(a<b){
        flag = 0;
        // break;
    }
    else{
        flag = 1;
        while(count%b!=0){
            if(a<=0){
                break;
                flag = 0;
            }
            count++;
            a=a-2;
            flag = 1;
        }
    }
    if(flag)
        cout << count << endl;
    else
        cout << -1 << endl;
}
