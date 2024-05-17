#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        int draws = 0;
        cin >> a >> b >> c;
        if ((a + b + c) % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            if(c>a){
                c = c - a;
                draws += a;
            }
            
        }
    }
}
