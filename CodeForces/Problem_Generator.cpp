#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        map<char, int> ma;
        ma['A'] = 0;
        ma['B'] = 0;
        ma['C'] = 0;
        ma['D'] = 0;
        ma['E'] = 0;
        ma['F'] = 0;
        ma['G'] = 0;
        for (int i = 0; i < n; i++)
        {
            ma[s[i]]++;
        }
        int sum = 0;
        for(auto i:ma){
            if(i.second<m){
                sum+=(m-i.second);
                
            }
        }
        cout << sum << endl;
    }
}
