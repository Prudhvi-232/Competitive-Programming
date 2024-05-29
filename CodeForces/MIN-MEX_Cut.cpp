#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        string s;
        cin >> s;
        int zinrow = 0;
        if(s[0]=='0')
            zinrow++;

        for (int i = 1; i < s.length();i++){
            if(s[i]=='0' && s[i-1]!='0'){
                zinrow++;
            }
        }
        if(zinrow==0){
            cout << 0 << endl;
        }
        else if(zinrow==1){
            cout << 1 << endl;
            
        }
        else{
            cout << 2 << endl;
        }
    }
}
