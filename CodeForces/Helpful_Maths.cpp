#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    vector<int> nums;
    for (int i = 0; i < s.length(); i += 2)
    {
        nums.push_back(s[i] - '0');
    }
    sort(nums.begin(), nums.end());
    cout << nums[0];
    for (int i = 1; i < nums.size();i++){
        cout << "+" << nums[i];
    }
}
