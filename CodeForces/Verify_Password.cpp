#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag = 1;
        for (int i = 1; i < n;i++){
            if(s[i]>=s[i-1]){
                flag = 1;
            }
            else{
                flag = 0;
                break;
            }
        }
        if(flag)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    
}
