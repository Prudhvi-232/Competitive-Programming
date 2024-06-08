#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int

int main() {
   int t; cin>>t;
   while(t--){
       ull x,y,op,v,k;
       cin>>x>>y>>k;
        op=(k*(y+1)-1);
        v=(op+x-2)/(x-1);
            cout<<v+k<<endl;
            
   }
   
   
   
    
return 0;
}