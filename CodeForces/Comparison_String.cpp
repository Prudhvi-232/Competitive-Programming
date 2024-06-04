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
        int less = 1,gre=1;
        for (int i = 1; i < n; i++)
        {
            if(s[i]==s[i-1]){
                less++;
                gre = max(less, gre);
            }
            else{
                less = 1;
            }
        }
        cout << gre+1 << endl;
    }
}
