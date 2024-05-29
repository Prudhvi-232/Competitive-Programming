#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        long long a = 1;
        while ((a & x) == 0)
        {
            a =a<< 1;
        }
        if(a^x){
            cout << a << endl;
        }
        else{
            while(1){
                if(x^a){
                    if(x&a){
                        break;
                    }
                    else{
                        a++;
                    }
                }
                else{
                    a++;
                }
            }
            cout << a << endl;
        }
    }
}
