    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int t;cin>>t;
        while(t--){
            long long n;
            cin >> n;
            set<long long> s;
            for (long long i = 0; i < n; i++) {
                long long x;
                cin >> x;
                s.insert(x); 
            }
            vector<long long> a(s.begin(), s.end()); 
            n = a.size(); 
            long long flag = 0;
            if(n<=2){
                flag = 1;
            }
            else{
                for (long long i = 0; i < n;i++){
                    if(a[i]%a[0]==0 || a[i]%a[1]==0){
                        flag = 1;
                    }
                    else{
                        flag = 0;
                        break;
                    }
                }
            }
            if(flag)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
