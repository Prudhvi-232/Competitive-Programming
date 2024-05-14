#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y;
    int minVal = INT_MAX, maxVal = INT_MIN;
    for (int i = 0; i < n;i++){
        int a;cin>>a;
        if(a<=minVal){
            minVal = a;
            x = i;
        }
        if(a>maxVal){
            maxVal = a;
            y = i;
        }
    }
    if(y>x)cout << y + (n -x)-2;
    else cout << y + (n -x)-1;
}
