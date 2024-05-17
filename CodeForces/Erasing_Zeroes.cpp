#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        int prev = -1;
        int sum = 0;
        for (int i = 0; i < s.size();i++){
            if(s[i]=='1'){
                if(prev!=-1){
                    sum+=i-prev-1;
                }
                prev = i;
            }
        }
        cout << sum << endl;
    }
}
    
