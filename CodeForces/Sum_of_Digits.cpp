#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long sum = 0;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += s[i] - '0';
    }
    while (sum > 9)
    {
        long long temp = 0;
        while (sum > 0)
        {
            temp += sum % 10;
            sum /= 10;
        }
        sum = temp;
        count++;
    }
    if(s.length()<=1)cout << count;
    else cout<<count+1;
}
