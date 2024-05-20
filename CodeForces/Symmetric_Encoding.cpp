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
        set<char> abc(s.begin(), s.end());
        vector<char> ss(abc.begin(), abc.end());
        int count = ss.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < count;j++){
                if(s[i]==ss[j]){
                    s[i]=ss[count-1-j];
                    break;
                }
            }
        }
        cout << s << endl;
    }
}
