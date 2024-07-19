#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define fr(n) for (int i = 0; i < n; i++)
typedef long long ll;

using namespace std;
void solve()
{
    int a, b, c;cin>>a>>b>>c;
    if(b-a==c-b){
        yes return;
    }
    else{
        if(a<=b || a<=c){
            if(b>c){
                int d = b - c;
                if((b+d)%a==0 && b+d>a){
                    yes return;
                }
            }
            if(b<c){
                int d = c-b;
                if((b-d)%a==0 && b-d>a){
                    yes return;
                }
            }
            if(b==c){
                if(b%a==0 && b>a){
                    yes return;
                }
            }
        }
        if(b<=a || b<=c){
            if(a==c){
                if(a%b==0 && a>b){
                    yes return;
                }
            }
            if(a>c){
                if((a-c)%2==0){
                    int d = (a-c)/2;
                    if((c+d)%b==0 && c+d>b){
                    yes return;
                    }
                }
            }
            if(a<c){
                if((c-a)%2==0){int d = (c-a)/2;
                
                if((c-d)%b==0 && c-d>b){
                    yes return;
                }}
            }

        }
        if(c<=a || c<=b){
            if(a==b){
                if(a%c==0 && a>c){
                    yes return;
                }
            }
            if(a>b){
                int d = (a-b);
                if((b-d)%c==0 && b-d>c){
                    yes return;
                }
            }
            if(a<b){
                int d = (b-a);
                if((b+d)%c==0 && b+d>c){
                    yes return;
                }
            }
        }
    }
    no return;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}