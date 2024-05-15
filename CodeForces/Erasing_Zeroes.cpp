#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;cin>>t;
    while(t--){
        string s;cin>>s;
        int ones=0;
        int n = s.length();
        for(int i=0;i<n;i++){
            if (s[i] == '1')
            {
                ones++;
            }
        }
        int maxlen , len = 0;
        if(ones>=1){
            maxlen = 1;
        }
        else{
            maxlen = 0;
        }
        for (int i = 0; i < n;i++){
            if (s[i] == '1')
            {
                len++;
            }
            else
            {
                maxlen = max(maxlen, len);
                len = 0;
            }
        }
        if(maxlen==ones){
            cout << 0<<endl;
        }
        else{
            cout << maxlen << endl;
        }
    }
}
