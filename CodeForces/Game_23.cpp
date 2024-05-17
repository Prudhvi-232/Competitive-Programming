#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    if (m % n == 0)
    {
        int count = 0;
        int mul = m / n;
        int flag = 1;
        while (mul!=1)
        {
            if (mul % 2 == 0)
            {
                mul = mul / 2;
                count++;
            }
            else if (mul % 3 == 0)
            {
                mul = mul / 3;
                count++;
            }
            else if(mul%2!=0 && mul%3!=0){
                flag = 0;
                break;
            }
        }
        if(flag)cout << count;
        else cout<<-1;
    }
    else
    {
        cout << -1;
    }
}
