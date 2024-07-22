#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;
class Solution
{
    public:
    string reverseWord(string str)
    {
        string s;
        for (int i = str.length() - 1; i >= 0;i--){
            s += str[i];
        }
        return s;
    }
};




int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solution ob;
        cout << ob.reverseWord(s) << endl;
    }
    return 0;
}