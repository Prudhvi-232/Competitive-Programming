#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> n;
    int c;
    char abbb;
    if(n==1){
        cin >> abbb;
        cout << abbb;
    }
    else{
        for (int i = 0; i < n;i++){
            if((i*(i+1))/2==n){
                c = i;
                break;
            }
        }
        for (int i = 0; i <c;i++){
            char c;
            for (int j = i; j >=0;j--){
                cin >> c;
            }
            s.push_back(c);
        }
        cout << s;
    }
}
