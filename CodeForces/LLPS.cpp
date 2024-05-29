#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    sort(s.begin(), s.end());
    string a;
    for (int i = s.length() - 1; i > 0;i--){
        if (s[i] != s[i - 1]){
            a.push_back(s[i]);
            break;
        }
        else{
            a.push_back(s[i]);
        }
    }
    int x = s.length();
    if(s[0]==s[x-1]){
        a.push_back(s[0]);
    }
    cout << a;
}
