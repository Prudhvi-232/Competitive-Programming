#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // Improve I/O performance
    cin.tie(NULL); // Untie cin and cout

    int t;
    cin >> t;
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;
        long long profit = 0;
        if(b-n>a){
            profit+=(b*(b+1)/2)-((b-n+1)*(b-n)/2);
        }
        else if(b>a){
            profit+=a*n+((b-a)*(b-a+1)/2);
        }else{
            profit+=a*n;
        }

        cout << profit << endl;
    }

    return 0;
}
