#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> aaa;
    for (int i = 0; i < s.length(); i++)
    {
        aaa[s[i]]++;
    }
    int flag = 0;
    for (auto i : aaa)
    {
        if (i.second % n == 0)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        for (const auto& pair : aaa) {
            if (pair.second % n == 0) {
                aaa[pair.first] = pair.second/n;
            }
        }
        for (int i = 0; i < n;i++){
            for(auto j:aaa){
                while(j.second--){
                    cout << j.first;
                    // j.second--;
                }
            }
        }
        // cout << aaa[0].first()<<aaa[0].second();
    }
    else
    {
        cout << -1;
    }
}
