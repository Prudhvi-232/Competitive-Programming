#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int flag = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' || s[i] == '7'){
            flag = 1;
        }else{
            flag = 0;
            break;
        }
    }
    if(flag==0)cout<<"NO";
    else
        cout << "YES";
}
