#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    // n++;
    int not_distinct = 1;
    while(not_distinct){
        n++;
        not_distinct = 0;
        int a = n % 10;
        int b = (n / 10) % 10;
        int c = (n / 100) % 10;
        int d = (n / 1000) % 10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            not_distinct = 0;
            // break;
        }else{
            not_distinct = 1;
        }

    }
        cout << n;
}
