#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int d = min(a,min(b, c));
    int e = max(a,max(b, c));
    int f = a + b + c - d - e;
    cout << abs(f - a) + abs(f - b) + abs(f - c);
}