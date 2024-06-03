#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> count;
        for (int i = 0; i < n; i++)
        {
            count[s[i]]++;
        }
        int e = 0;
        int o = 0;
        int sum = n;
        for (auto i:count){
            if(i.second&1){
                o++;
            }
            else{
                e++;
            }
        }
        if(k==o-1){
            cout << "YES\n";
        }
        else if(k<o){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }

    }
}
