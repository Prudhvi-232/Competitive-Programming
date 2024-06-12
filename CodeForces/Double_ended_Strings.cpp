#include<bits/stdc++.h>
using namespace std;
int sub(string a,string b){
        int al=a.length();
        int bl=b.length(),cmax=0;
        for(int j=0;j<bl;j++){
                int i=0;
                int jind=j;
                for (int i = 0; i < al;i++){

                    while (i < al && a[i] != b[j])
                    {
                        i++;
                    }
          if(a[i]==b[j]){
                  int count=0;
                   while(j<bl&&i<al&&a[i]==b[j]){
                           i++;
                           j++;
                           count++;
                          
                   }
                   if(cmax<count){
                           cmax=count;
                   }
           }
           j=jind;
                }
          
   }
   return cmax;
}
int main(){
        
        int t; cin>>t;
        while(t--){
     string a;
     cin>>a;
      string b;
     cin>>b;
 cout<<a.length()+b.length()-2*max(sub(a,b),sub(b,a))<<endl;
}
return 0;
}

