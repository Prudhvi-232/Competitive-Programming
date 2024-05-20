#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;cin>>a>>b>>c;
    int flag = 0;
    int temp = c;
    while(c>0){
        if(c%b==0){
            flag = 1;
            break;
        }
        else{
            c = c - a;
        }
        if(c==0){
            flag = 1;
            break;
        }
        if(c<0){
            flag = 0;
            break;
        }
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
}
