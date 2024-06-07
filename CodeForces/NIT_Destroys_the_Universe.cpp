#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
            int n,c=0,ct=0;
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++){
                    cin>>a[i];
                    if(a[i]==0){
                            ct++;
                    }
            } 
            if(ct==n){
                    cout<<"0"<<endl;
            }
            else{
                    vector<int>v;
                    int seq=0;

                    for(int i=0;i<n;i++){
                    
                    if(i==n-1&&a[i]>0){
                            v.push_back(1);
                    }
                    else if(a[i]!=0){
                            seq++;
                    }
                    else
                    {
                            if(seq>0){
                                    v.push_back(1);
                            }
                            seq=0;
                    
                    }
                    }
                    
                    if(v.size()==1){
                            cout<<"1"<<endl;
                    }
                    else{
                            cout<<"2"<<endl;
                    }
            }
        }

    return 0;
}